/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:57:16 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 06:33:22 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_hex(char *s, int intlen, const char x, t_format *fmt)
{
	char	pad_char;

	pad_char = (fmt->zero && !fmt->hasprecision) ? '0' : ' ';
	if (pad_char == '0')
	{
		if (fmt->hash && !ft_strequ(s, "0") && x == 'x')
			fmt->nprinted += write(1, "0x", 2);
		else if (fmt->hash && !ft_strequ(s, "0") && x == 'X')
			fmt->nprinted += write(1, "0X", 2);
		while (fmt->width-- > 0)
			fmt->nprinted += write(1, &pad_char, 1);
	}
	else if (pad_char == ' ')
	{
		while (fmt->width-- > 0)
			fmt->nprinted += write(1, &pad_char, 1);
		if (fmt->hash && !ft_strequ(s, "0") && x == 'x')
			fmt->nprinted += write(1, "0x", 2);
		else if (fmt->hash && !ft_strequ(s, "0") && x == 'X')
			fmt->nprinted += write(1, "0X", 2);
	}
	while (fmt->precision-- > 0)
		fmt->nprinted += write(1, "0", 1);
	fmt->nprinted += write(1, s, intlen);
}

void	left_justify_hex(char *s, int intlen, const char x, t_format *fmt)
{
	if (fmt->hash && !ft_strequ(s, "0") && x == 'x')
		fmt->nprinted += write(1, "0x", 2);
	else if (fmt->hash && !ft_strequ(s, "0") && x == 'X')
		fmt->nprinted += write(1, "0X", 2);
	while (fmt->precision > 0)
	{
		fmt->nprinted += write(1, "0", 1);
		fmt->precision--;
	}
	fmt->nprinted += write(1, s, intlen);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
}

void	sub_specifiers_hex(const char x, uintmax_t n, t_format *fmt)
{
	char	*s;
	int		intlen;

	s = x == 'x' ? uitoa_base(n, 16) : itoa_base_upper(n, 16);
	intlen = (fmt->hasprecision && fmt->precision <= 0 && n == 0) ? 0
																: ft_strlen(s);
	if (fmt->hasprecision && ft_strequ(s, "0") && fmt->precision > intlen)
		fmt->precision = fmt->precision - intlen;
	else if (fmt->hasprecision && fmt->precision > intlen)
		fmt->precision = fmt->precision - intlen;
	else
		fmt->precision = 0;
	if (ft_strequ(s, "0") && fmt->hash)
		fmt->width = fmt->width - (intlen + fmt->precision);
	else if (fmt->hash)
		fmt->width = fmt->width - (intlen + fmt->precision + 2);
	else
		fmt->width = fmt->width - (intlen + fmt->precision);
	if (fmt->minus)
		left_justify_hex(s, intlen, x, fmt);
	else if (fmt->minus == 0)
		right_justify_hex(s, intlen, x, fmt);
	free(s);
}

void	print_hex(const char x, t_format *fmt, va_list ap)
{
	uintmax_t	n;

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
	sub_specifiers_hex(x, n, fmt);
}
