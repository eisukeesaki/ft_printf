/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/23 01:46:12 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

t_float	sign_and_width(t_format *recipe, t_float fl)
{
	if (fl.padc == '0' && recipe->width > 0)
	{
		if (recipe->space)
		{
			recipe->nprinted += write(1, " ", 1);
			recipe->space = 0;
		}
		if (fl.hassign)
		{
			recipe->nprinted += write(1, &fl.sign, 1);
			fl.hassign = 0;
		}
	}
	return (fl);
}

void	right_justify_float(t_format *recipe, t_float fl)
{
	size_t	i;

	i = 0;
	fl = sign_and_width(recipe, fl);
	while (fl.npad-- > 0)
		recipe->nprinted += write(1, &fl.padc, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (fl.hassign)
		recipe->nprinted += write(1, &fl.sign, 1);
	while (fl.int_s[i])
		recipe->nprinted += write(1, &fl.int_s[i++], 1);
	if (fl.dot)
	{
		recipe->nprinted += write(1, ".", 1);
		while (fl.zeros-- > 0 && fl.precision-- != 0)
			recipe->nprinted += write(1, "0", 1);
		i = 0;
		while (fl.frac_s[i] && fl.precision != 0)
		{
			recipe->nprinted += write(1, &fl.frac_s[i++], 1);
			fl.precision--;
		}
		// while (fl.append-- > 0)
		// 	recipe->nprinted += write(1, "0", 1);
	}
}

void	left_justify_float(t_format *recipe, t_float fl)
{
	size_t	i;

	i = 0;
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (fl.hassign)
		recipe->nprinted += write(1, &fl.sign, 1);
	while (fl.int_s[i])
		recipe->nprinted += write(1, &fl.int_s[i++], 1);
	if (fl.dot)
	{
		recipe->nprinted += write(1, ".", 1);
		while (fl.zeros-- > 0 && fl.precision-- != 0)
			recipe->nprinted += write(1, "0", 1);
		i = 0;
		while (fl.frac_s[i] && fl.precision != 0)
		{
			recipe->nprinted += write(1, &fl.frac_s[i++], 1);
			fl.precision--;
		}
	}
	while (fl.npad-- > 0)
		write(1, &fl.padc, 1);
}

void	process_float(long double n, t_format *recipe)
{
	t_float	fl;

	fl.hassign = 0;
	if (n < 0)
	{
		fl.sign = '-';
		fl.hassign = 1;
		n = -n;
	}
	else if (n > 0 && recipe->plus)
	{
		fl.sign = '+';
		fl.hassign = 1;
	}
	fl.precision = 6;

	if (recipe->space && fl.hassign)
		recipe->space = 0;

	// if (recipe->zero && !recipe->hasprecision)
	if (recipe->zero && !recipe->minus)
		fl.padc = '0';
	else
		fl.padc = ' ';
	if (recipe->hasprecision && recipe->precision >= 0)
		fl.precision = recipe->precision;

	fl.int_ld = (long long)n;
	fl.int_s = uitoa_base(fl.int_ld, 10);
	n -= (long double)fl.int_ld;
	fl.append = 0;
	if (n == 0)
		fl.append = fl.precision - 1;
	n *= power(10, fl.precision);

	fl.frac_ld =  (n >= 0) ? (long)(n + 0.5) : (long)(n - 0.5); // why not (ld)0.5?

	if (fl.frac_ld == power(10, fl.precision) && fl.frac_ld != 0)
	{
		fl.int_s = uitoa_base(fl.int_ld + 1, 10);
		fl.frac_ld = 0;
		fl.append = fl.precision - 1;
	}

	fl.frac_s = uitoa_base(fl.frac_ld, 10);
	if (fl.precision != 0)
		fl.zeros = fl.precision - count_int_digits(fl.frac_ld);
	else
		fl.zeros = 0;

	fl.intlen = count_int_digits(fl.int_ld);

	fl.dot = 0;
	if ((ft_strlen(fl.frac_s) && fl.precision != 0) || (recipe->hash))
		fl.dot = 1;

	// if (fl.precision != 0)
		fl.npad = recipe->width - recipe->space - fl.hassign - fl.intlen - fl.dot - recipe->precision; // which precision?
	// else
		// fl.npad = recipe->width - fl.hassign - fl.intlen - fl.dot - recipe->precision; // which precision?
		// fl.npad = 0;


	if (recipe->minus)
		left_justify_float(recipe, fl);
	else if (!recipe->minus)
		right_justify_float(recipe, fl);
}

void	print_float(t_format *recipe, va_list ap)
{
	long double	n;

	// TODO: check recipe->length and extract appropriate arg type
	n = (long double)va_arg(ap, double);
	process_float(n, recipe);
}