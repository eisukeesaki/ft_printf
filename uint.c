/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 06:27:52 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	right_justify_uint(char *s, int intlen, t_format *fmt)
{
	char	pad;

	pad = (fmt->zero && !fmt->hasprecision) ? '0' : ' ';
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, &pad, 1);
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	while (fmt->precision-- > 0)
		fmt->nprinted += write(1, "0", 1);
	fmt->nprinted += write(1, s, intlen);
}

void	left_justify_uint(char *s, int intlen, t_format *fmt)
{
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	while (fmt->precision > 0)
	{
		fmt->nprinted += write(1, "0", 1);
		fmt->precision--;
	}
	fmt->nprinted += write(1, s, intlen);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
}

void	sub_specifiers_uint(unsigned long long n, t_format *fmt)
{
	char	*s;
	int		intlen;

	intlen = count_int_digits(n);
	if (fmt->hasprecision && fmt->precision == 0 && n == 0)
		intlen = 0;
	if (fmt->hasprecision && fmt->precision > intlen)
		fmt->precision = fmt->precision - intlen;
	else
		fmt->precision = 0;
	fmt->width = fmt->width - (intlen + fmt->precision + fmt->space);
	s = uitoa_base(n, 10);
	if (fmt->minus)
		left_justify_uint(s, intlen, fmt);
	else if (!fmt->minus)
		right_justify_uint(s, intlen, fmt);
	free(s);
}

void	print_uint(t_format *fmt, va_list ap)
{
	unsigned long long	n;

	n = 0;
	if (!fmt->length)
		n = (unsigned)va_arg(ap, unsigned);
	else if (fmt->length == HH)
		n = (unsigned char)va_arg(ap, int);
	else if (fmt->length == H)
		n = (unsigned short)va_arg(ap, int);
	else if (fmt->length == LL)
		n = (unsigned long long)va_arg(ap, unsigned long long);
	else if (fmt->length == L)
		n = (unsigned long)va_arg(ap, unsigned long);
	sub_specifiers_uint(n, fmt);
}
