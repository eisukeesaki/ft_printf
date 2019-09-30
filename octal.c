/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:57:16 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/30 04:31:14 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_octal(char *s, int intlen, t_format *fmt)
{
	char	pad_char;

	pad_char = (fmt->zero && !fmt->hasprecision) ? '0' : ' ';
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, &pad_char, 1);
	while (fmt->precision-- > 0)
		fmt->nprinted += write(1, "0", 1);
	if (fmt->hash && !ft_strequ(s, "0"))
		fmt->nprinted += write(1, "0", 1);
	fmt->nprinted += write(1, s, intlen);
}

void	left_justify_octal(char *s, int intlen, t_format *fmt)
{
	if (fmt->hash && !ft_strequ(s, "0"))
		fmt->nprinted += write(1, "0", 1);
	while (fmt->precision > 0)
	{
		fmt->nprinted += write(1, "0", 1);
		fmt->precision--;
	}
	fmt->nprinted += write(1, s, intlen);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
}

void	sub_specifiers_octal(uintmax_t n, t_format *fmt)
{
	char	*s;
	int		intlen;

	s = itoa_base(n, 8);
	intlen =
	(fmt->hasprecision && fmt->precision <= 0 && !fmt->hash && n == 0) ? 0
																: ft_strlen(s);
	if (fmt->hasprecision && ft_strequ(s, "0") && fmt->precision > intlen)
		fmt->precision = fmt->precision - intlen;
	else if (fmt->hasprecision && fmt->precision > intlen)
		fmt->precision = fmt->precision - intlen - fmt->hash;
	else
		fmt->precision = 0;
	if (ft_strequ(s, "0") && fmt->hash)
		fmt->width = fmt->width - (intlen + fmt->precision);
	else
		fmt->width = fmt->width - (intlen + fmt->precision + fmt->hash);
	if (!fmt->minus)
		right_justify_octal(s, intlen, fmt);
	else if (fmt->minus)
		left_justify_octal(s, intlen, fmt);
	free(s);
}

void	print_octal(t_format *fmt, va_list ap)
{
	uintmax_t	n;

	n = 0;
	if (!fmt->length)
		n = va_arg(ap, unsigned);
	else if (fmt->length == HH)
		n = (unsigned char)va_arg(ap, int);
	else if (fmt->length == H)
		n = (unsigned short)va_arg(ap, int);
	else if (fmt->length == LL)
		n = va_arg(ap, unsigned long long);
	else if (fmt->length == L)
		n = va_arg(ap, unsigned long);
	sub_specifiers_octal(n, fmt);
}
