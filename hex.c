/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:57:16 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/10 22:57:50 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_hex(char *s, int intlen, char x, t_format *recipe)
{
	char	pad;

	if (recipe->zero && !recipe->hasprecision)
		pad = '0';
	else
		pad = ' ';
	if (pad == '0')
	{
		if (recipe->hash && !ft_strequ(s, "0") && x == 'x')
			recipe->nprinted += write(1, "0x", 2);
		else if (recipe->hash && !ft_strequ(s, "0") && x == 'X')
			recipe->nprinted += write(1, "0X", 2);
		while (recipe->width-- > 0)
			recipe->nprinted += write(1, &pad, 1);
		while (recipe->precision-- > 0)
			recipe->nprinted += write(1, "0", 1);
	}
	else if (pad == ' ')
	{
		while (recipe->width-- > 0)
			recipe->nprinted += write(1, &pad, 1);
		if (recipe->hash && !ft_strequ(s, "0") && x == 'x')
			recipe->nprinted += write(1, "0x", 2);
		else if (recipe->hash && !ft_strequ(s, "0") && x == 'X')
			recipe->nprinted += write(1, "0X", 2);
		while (recipe->precision-- > 0)
			recipe->nprinted += write(1, "0", 1);
	}
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_hex(char *s, int intlen, char x, t_format *recipe)
{
	if (recipe->hash && !ft_strequ(s, "0") && x == 'x')
		recipe->nprinted += write(1, "0x", 2);
	else if (recipe->hash && !ft_strequ(s, "0") && x == 'X')
		recipe->nprinted += write(1, "0X", 2);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	apply_sub_spec_hex(char x, uintmax_t n, t_format *recipe)
{
	char	*s;
	int		intlen;

	if (x == 'x')
		s = itoa_base(n, 16);
	else if (x == 'X')
		s = itoa_base_upper(n, 16);
	intlen = ft_strlen(s);
	if (recipe->hasprecision && recipe->precision <= 0 && n == 0)
		intlen = 0;
	if (recipe->hasprecision && ft_strequ(s, "0") && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else
		recipe->precision = 0;
	if (ft_strequ(s, "0") && recipe->hash)
		recipe->width = recipe->width - (intlen + recipe->precision);
	else if (recipe->hash)
		recipe->width = recipe->width - (intlen + recipe->precision + 2);
	else
		recipe->width = recipe->width - (intlen + recipe->precision);
	if (recipe->minus == 1)
		left_justify_hex(s, intlen, x, recipe);
	else if (recipe->minus == 0)
		right_justify_hex(s, intlen, x, recipe);
}

void	print_hex(char x, t_format *recipe, va_list ap)
{
	uintmax_t	n;

	n = 0;
	if (recipe->length == 0)
		n = (unsigned)va_arg(ap, unsigned);
	else if (recipe->length == HH)
		n = (unsigned char)va_arg(ap, int);
	else if (recipe->length == H)
		n = (unsigned short)va_arg(ap, int);
	else if (recipe->length == LL)
		n = (unsigned long long)va_arg(ap, unsigned long long);
	else if (recipe->length == L)
		n = (unsigned long)va_arg(ap, unsigned long);
	apply_sub_spec_hex(x, n, recipe);
}
