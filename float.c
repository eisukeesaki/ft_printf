/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/25 23:51:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	sign_and_width(t_format *recipe, t_float *fl)
{
	if (fl->padc == '0' && recipe->width > 0)
	{
		if (recipe->space)
		{
			recipe->nprinted += write(1, " ", 1);
			recipe->space = 0;
		}
		if (fl->hassign)
		{
			recipe->nprinted += write(1, &fl->sign, 1);
			fl->hassign = 0;
		}
	}
}

void	right_justify_float(t_format *recipe, t_float *fl)
{
	size_t	i;

	i = 0;
	sign_and_width(recipe, fl);
	while (fl->npad-- > 0)
		recipe->nprinted += write(1, &fl->padc, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (fl->hassign)
		recipe->nprinted += write(1, &fl->sign, 1);
	while (fl->int_s[i])
		recipe->nprinted += write(1, &fl->int_s[i++], 1);
	if (fl->dot)
	{
		recipe->nprinted += write(1, ".", 1);
		while (fl->zeros-- > 0 && fl->precision-- != 0)
			recipe->nprinted += write(1, "0", 1);
		i = 0;
		while (fl->frac_s[i] && fl->precision != 0)
		{
			recipe->nprinted += write(1, &fl->frac_s[i++], 1);
			fl->precision--;
		}
	}
}

void	left_justify_float(t_format *recipe, t_float *fl)
{
	size_t	i;

	i = 0;
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (fl->hassign)
		recipe->nprinted += write(1, &fl->sign, 1);
	while (fl->int_s[i])
		recipe->nprinted += write(1, &fl->int_s[i++], 1);
	if (fl->dot)
	{
		recipe->nprinted += write(1, ".", 1);
		while (fl->zeros-- > 0 && fl->precision-- != 0)
			recipe->nprinted += write(1, "0", 1);
		i = 0;
		while (fl->frac_s[i] && fl->precision != 0)
		{
			recipe->nprinted += write(1, &fl->frac_s[i++], 1);
			fl->precision--;
		}
	}
	while (fl->npad-- > 0)
		write(1, &fl->padc, 1);
}

void	justify(t_format *recipe, t_float *fl)
{
	if (recipe->minus)
		left_justify_float(recipe, fl);
	else if (!recipe->minus)
		right_justify_float(recipe, fl);
}

void	format_2(t_format *recipe, t_float *fl)
{
	if (fl->precision != 0)
		fl->zeros = fl->precision - count_int_digits(fl->frac_ld);
	else
		fl->zeros = 0;
	fl->intlen = count_int_digits(fl->int_ld);
	fl->dot = 0;
	if ((ft_strlen(fl->frac_s) && fl->precision != 0) || (recipe->hash))
		fl->dot = 1;
	fl->npad = recipe->width - recipe->space - fl->hassign - fl->intlen - fl->dot - recipe->precision;
}

void	convert(t_float *fl)
{
	fl->int_ld = (long long)fl->n;
	fl->int_s = uitoa_base(fl->int_ld, 10);
	fl->n -= (long double)fl->int_ld;
	fl->append = 0;
	if (fl->n == 0)
		fl->append = fl->precision - 1;
	fl->n *= power(10, fl->precision);

	fl->frac_ld =  (fl->n >= 0) ? (long)(fl->n + 0.5) : (long)(fl->n - 0.5); // why not (ld)0.5?

	if (fl->frac_ld == power(10, fl->precision) && fl->frac_ld != 0)
	{
		fl->int_s = uitoa_base(fl->int_ld + 1, 10);
		fl->frac_ld = 0;
		fl->append = fl->precision - 1;
	}
	fl->frac_s = uitoa_base(fl->frac_ld, 10);
}

void	format(t_format *recipe, t_float *fl)
{
	if (fl->n < 0)
	{
		fl->sign = '-';
		fl->hassign = 1;
		fl->n = -fl->n;
	}
	else if (fl->n > 0 && recipe->plus)
	{
		fl->sign = '+';
		fl->hassign = 1;
	}
	fl->precision = 6;
	if (recipe->space && fl->hassign)
		recipe->space = 0;
	fl->padc = recipe->zero && !recipe->minus ? '0' : ' ';
	if (recipe->hasprecision && recipe->precision >= 0)
		fl->precision = recipe->precision;
}

void	bzero_fl(t_float *fl)
{
	fl->n = 0;
	fl->int_ld = 0;
	fl->int_s = 0;
	fl->intlen = 0;
	fl->frac_ld = 0;
	fl->frac_s = 0;
	fl->precision = 0;
	fl->append = 0;
	fl->zeros = 0;
	fl->dot = 0;
	fl->npad = 0;
	fl->sign = 0;
	fl->hassign = 0;
	fl->padc = 0;
}

t_float	*init_fl(void)
{
	t_float *fl;

	if (!(fl = (t_float *)malloc(sizeof(t_float))))
		return (0);
	bzero_fl(fl);
	return (fl);
}

void	print_float(t_format *recipe, va_list ap)
{
	t_float 	*fl;

	fl = init_fl();
	if (recipe->length == UPRL)
		fl->n = (long double)va_arg(ap, long double);
	else
		fl->n = (long double)va_arg(ap, double);
	format(recipe, fl);
	convert(fl);
	format_2(recipe, fl);
	justify(recipe, fl);
	free(fl->int_s);
	free(fl->frac_s);
	free(fl);
}
