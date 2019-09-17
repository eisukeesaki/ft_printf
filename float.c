/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/17 00:21:01 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		zero_and_width_float(t_format *recipe, char pad, char sign_char, int sign)
{
	if (pad == '0' && recipe->width > 0)
	{
		if (recipe->space)
		{
			recipe->nprinted += write(1, " ", 1);
			recipe->space = 0;
		}
		if (sign_char == '+' || sign_char == '-')
			recipe->nprinted += write(1, &sign_char, 1);
		sign = 0;
	}
	return (sign);
}

void	right_justify_float(char *s, int intlen, t_format *recipe, int sign)
{
	char	pad;
	char	sign_char;

	pad = (recipe->zero && !recipe->hasprecision) ? '0' : ' ';
	sign_char = '\0';
	if (sign == POSITIVE)
		sign_char = '+';
	// else if (sign == NEGATIVE)
	// 	sign_char = '-';
	sign = zero_and_width_float(recipe, pad, sign_char, sign);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, &pad, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (sign != 0 && (sign_char == '+' || sign_char == '-'))
		recipe->nprinted += write(1, &sign_char, 1);
	while (recipe->precision-- > 0)
		recipe->nprinted += write(1, "0", 1);
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_float(char *s, int intlen, t_format *recipe, int sign)
{
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	// if (sign == NEGATIVE)
	// 	recipe->nprinted += write(1, "-", 1);
	// else if (sign == POSITIVE)
	if (sign == POSITIVE)
		recipe->nprinted += write(1, "+", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	apply_sub_spec_float(long double n, t_format *recipe, int sign)
{
	char	*s;
	int		intlen;

	if (recipe->space && sign != 0)
		recipe->space = 0;
	s = ftoa(n, recipe->precision);
	intlen = ft_strlen(s);
	if (recipe->hasprecision && recipe->precision == 0 && n == 0)
		intlen = 0;
	if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else
		recipe->precision = 0;
	if (sign != 0)
		recipe->width =
			recipe->width - (intlen + recipe->precision + recipe->space + 1);
	else
		recipe->width =
				recipe->width - (intlen + recipe->precision + recipe->space);
	if (recipe->space && sign != 0)
		recipe->space = 0;
	if (recipe->minus == 1)
		left_justify_float(s, intlen, recipe, sign);
	else if (recipe->minus == 0)
		right_justify_float(s, intlen, recipe, sign);
}

// void	process_float(long double n, t_format *recipe)
// {

// }

void	print_float(t_format *recipe, va_list ap)
{
	long double	n;
	int			sign;

	sign = 0;
	n = (long double)va_arg(ap, double);
	if (recipe->precision == 0 && !recipe->hasprecision)
		recipe->precision = 6;
	if (recipe->plus && n >= 0)
		sign = POSITIVE;
	apply_sub_spec_float(n, recipe, sign);
	// process_float(n, recipe);
}