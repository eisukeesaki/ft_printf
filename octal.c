/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   octal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:57:16 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 01:49:12 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_octal(char *s, int intlen, t_format *recipe)
{
	char	pad_char;

	pad_char = (recipe->zero && !recipe->hasprecision) ? '0' : ' ';
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, &pad_char, 1);
	while (recipe->precision-- > 0)
		recipe->nprinted += write(1, "0", 1);
	if (recipe->hash && !ft_strequ(s, "0"))
		recipe->nprinted += write(1, "0", 1);
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_octal(char *s, int intlen, t_format *recipe)
{
	if (recipe->hash && !ft_strequ(s, "0"))
		recipe->nprinted += write(1, "0", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	sub_specifiers_octal(uintmax_t n, t_format *recipe)
{
	char	*s;
	int		intlen;

	s = uitoa_base(n, 8);
	intlen =
	(recipe->hasprecision && recipe->precision <= 0 && !recipe->hash && n == 0)
															? 0 : ft_strlen(s);
	if (recipe->hasprecision && ft_strequ(s, "0") && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen - recipe->hash;
	else
		recipe->precision = 0;
	if (ft_strequ(s, "0") && recipe->hash)
		recipe->width = recipe->width - (intlen + recipe->precision);
	else
		recipe->width =
					recipe->width - (intlen + recipe->precision + recipe->hash);
	if (recipe->minus)
		left_justify_octal(s, intlen, recipe);
	else if (!recipe->minus)
		right_justify_octal(s, intlen, recipe);
	free(s);
}

void	print_octal(t_format *recipe, va_list ap)
{
	uintmax_t	n;

	n = 0;
	if (!recipe->length)
		n = (unsigned)va_arg(ap, unsigned);
	else if (recipe->length == HH)
		n = (unsigned char)va_arg(ap, int);
	else if (recipe->length == H)
		n = (unsigned short)va_arg(ap, int);
	else if (recipe->length == LL)
		n = (unsigned long long)va_arg(ap, unsigned long long);
	else if (recipe->length == L)
		n = (unsigned long)va_arg(ap, unsigned long);
	sub_specifiers_octal(n, recipe);
}
