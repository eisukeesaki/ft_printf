/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/28 07:21:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		zero_and_width_int(t_format *fmt, char pad, char sign_char, int sign)
{
	if (pad == '0' && fmt->width > 0)
	{
		if (fmt->space)
		{
			fmt->nprinted += write(1, " ", 1);
			fmt->space = 0;
		}
		if (sign_char == '+' || sign_char == '-')
			fmt->nprinted += write(1, &sign_char, 1);
		sign = 0;
	}
	return (sign);
}

void	right_justify_int(char *s, int intlen, t_format *fmt, int sign)
{
	char	pad;
	char	sign_char;

	pad = (fmt->zero && !fmt->hasprecision) ? '0' : ' ';
	sign_char = '\0';
	if (sign == POSITIVE)
		sign_char = '+';
	else if (sign == NEGATIVE)
		sign_char = '-';
	sign = zero_and_width_int(fmt, pad, sign_char, sign);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, &pad, 1);
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	if (sign && (sign_char == '+' || sign_char == '-'))
		fmt->nprinted += write(1, &sign_char, 1);
	while (fmt->precision-- > 0)
		fmt->nprinted += write(1, "0", 1);
	fmt->nprinted += write(1, s, intlen);
}

void	left_justify_int(char *s, int intlen, t_format *fmt, int sign)
{
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	if (sign == NEGATIVE)
		fmt->nprinted += write(1, "-", 1);
	else if (sign == POSITIVE)
		fmt->nprinted += write(1, "+", 1);
	while (fmt->precision > 0)
	{
		fmt->nprinted += write(1, "0", 1);
		fmt->precision--;
	}
	fmt->nprinted += write(1, s, intlen);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
}

void	sub_specifiers_int(intmax_t n, t_format *fmt, int sign)
{
	char	*s;
	int		intlen;

	if (fmt->space && sign)
		fmt->space = 0;
	intlen = count_int_digits(n);
	if (fmt->hasprecision && fmt->precision == 0 && n == 0)
		intlen = 0;
	if (fmt->hasprecision && fmt->precision > intlen)
		fmt->precision = fmt->precision - intlen;
	else
		fmt->precision = 0;
	if (sign)
		fmt->width = fmt->width - (intlen + fmt->precision + fmt->space + 1);
	else
		fmt->width = fmt->width - (intlen + fmt->precision + fmt->space);
	if (fmt->space && sign)
		fmt->space = 0;
	s = itoa_base(n, 10);
	if (!fmt->minus)
		right_justify_int(s, intlen, fmt, sign);
	else if (fmt->minus)
		left_justify_int(s, intlen, fmt, sign);
	free(s);
}

void	print_int(t_format *fmt, va_list ap)
{
	intmax_t	n;
	int			sign;

	n = 0;
	sign = 0;
	if (!fmt->length)
		n = va_arg(ap, int);
	else if (fmt->length == HH)
		n = (char)va_arg(ap, int);
	else if (fmt->length == H)
		n = (short)va_arg(ap, int);
	else if (fmt->length == LL)
		n = va_arg(ap, long long);
	else if (fmt->length == L)
		n = va_arg(ap, long);
	if (fmt->plus && n >= 0)
		sign = POSITIVE;
	else if (n < 0)
	{
		sign = NEGATIVE;
		n *= -1;
	}
	sub_specifiers_int(n, fmt, sign);
}
