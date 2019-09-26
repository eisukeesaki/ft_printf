/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/25 20:28:11 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	right_justify_uint(char *s, int intlen, t_format *recipe)
{
	char	pad;

	pad = (recipe->zero && !recipe->hasprecision) ? '0' : ' ';
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, &pad, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	while (recipe->precision-- > 0)
		recipe->nprinted += write(1, "0", 1);
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_uint(char *s, int intlen, t_format *recipe)
{
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	apply_sub_spec_uint(unsigned long long n, t_format *recipe)
{
	char	*s;
	int		intlen;

	intlen = count_int_digits(n);
	if (recipe->hasprecision && recipe->precision == 0 && n == 0)
		intlen = 0;
	if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else
		recipe->precision = 0;
	recipe->width =
				recipe->width - (intlen + recipe->precision + recipe->space);
	s = itoa_base(n, 10);
	if (recipe->minus == 1)
		left_justify_uint(s, intlen, recipe);
	else if (recipe->minus == 0)
		right_justify_uint(s, intlen, recipe);
	free(s);
}

void	print_uint(t_format *recipe, va_list ap)
{
	unsigned long long	n;

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
	apply_sub_spec_uint(n, recipe);
}
