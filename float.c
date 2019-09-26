/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/26 02:18:18 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

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
