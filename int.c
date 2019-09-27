/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/26 21:59:07 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		zero_and_width_int(t_format *recipe, char pad, char sign_char, int sign)
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

void	right_justify_int(char *s, int intlen, t_format *recipe, int sign)
{
	char	pad;
	char	sign_char;

	pad = (recipe->zero && !recipe->hasprecision) ? '0' : ' ';
	sign_char = '\0';
	if (sign == POSITIVE)
		sign_char = '+';
	else if (sign == NEGATIVE)
		sign_char = '-';
	sign = zero_and_width_int(recipe, pad, sign_char, sign);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, &pad, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (sign && (sign_char == '+' || sign_char == '-'))
		recipe->nprinted += write(1, &sign_char, 1);
	while (recipe->precision-- > 0)
		recipe->nprinted += write(1, "0", 1);
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_int(char *s, int intlen, t_format *recipe, int sign)
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
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	sub_specifiers_int(long long n, t_format *recipe, int sign)
{
	char	*s;
	int		intlen;

	if (recipe->space && sign)
		recipe->space = 0;
	intlen = count_int_digits(n);
	if (recipe->hasprecision && recipe->precision == 0 && n == 0)
		intlen = 0;
	if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else
		recipe->precision = 0;
	if (sign)
		recipe->width =
			recipe->width - (intlen + recipe->precision + recipe->space + 1);
	else
		recipe->width =
				recipe->width - (intlen + recipe->precision + recipe->space);
	if (recipe->space && sign)
		recipe->space = 0;
	s = itoa_base(n, 10);
	if (recipe->minus)
		left_justify_int(s, intlen, recipe, sign);
	else if (!recipe->minus)
		right_justify_int(s, intlen, recipe, sign);
	free(s);
}

void	print_int(t_format *recipe, va_list ap)
{
	long long	n;
	int			sign;

	n = 0;
	sign = 0;
	if (!recipe->length)
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
	sub_specifiers_int(n, recipe, sign);
}
