/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/03 05:37:33 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< debug purpose
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> debug purpose

int		zero_and_width(t_format *recipe, char pad, char sign_char, int sign)
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

void	right_justify(char *s, int intlen, t_format *recipe, int sign)
{
	char	pad;
	char	sign_char;

	if (recipe->zero && !recipe->hasprecision)
		pad = '0';
	else
		pad = ' ';
	sign_char = '\0';
	if (sign == POSITIVE)
		sign_char = '+';
	else if (sign == NEGATIVE)
		sign_char = '-';
	sign = zero_and_width(recipe, pad, sign_char, sign);
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

void	left_justify(char *s, t_format *recipe, int sign)
{
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (sign == NEGATIVE)
		recipe->nprinted += write(1, "-", 1);
	else if (sign == POSITIVE)
		recipe->nprinted += write(1, "+", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, s, ft_strlen(s));
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	apply_sub_spec(long long n, t_format *recipe, int sign)
{
	char	*s;
	int		intlen;
	
	if (recipe->space && sign != 0)
		recipe->space = 0;
	intlen = count_int_digits(n);
	if (recipe->hasprecision && recipe->precision == 0 && n == 0)
		intlen = 0;
	if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else
		recipe->precision = 0;
	if (sign != 0)
		recipe->width = recipe->width - (intlen + recipe->precision + recipe->space + 1);
	else
		recipe->width = recipe->width - (intlen + recipe->precision + recipe->space);
	if (recipe->space && sign != 0)
		recipe->space = 0;
	s = itoa_base(n, 10);
	if (recipe->minus == 1)
		left_justify(s, recipe, sign);
	else if (recipe->minus == 0)
		right_justify(s, intlen, recipe, sign);
}

void	print_int(t_format *recipe, va_list ap)
{
	long long	n;
	int			sign;

	n = 0;
	sign = 0;
	if (recipe->length == 0)
		n = (int)va_arg(ap, int);
	else if (recipe->length == HH)
		n = (char)va_arg(ap, int);
	else if (recipe->length == H)
		n = (short)va_arg(ap, int);
	else if (recipe->length == LL)
		n = (long long)va_arg(ap, long long);
	else if (recipe->length == L)
		n = (long)va_arg(ap, long);
	if (recipe->plus && n >= 0)
		sign = POSITIVE;
	else if (n < 0)
	{
		sign = NEGATIVE;
		n *= -1;
	}
	apply_sub_spec(n, recipe, sign);
}
