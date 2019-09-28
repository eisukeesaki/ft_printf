/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/28 04:19:50 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	left_justify_string(t_format *fmt, char *s, int slen)
{
	if (fmt->hasprecision && slen > fmt->precision)
		slen = fmt->precision;
	fmt->nprinted += write(1, s, slen);
	if (fmt->width > slen)
	{
		while ((fmt->width--) - (slen) > 0)
			fmt->nprinted += write(1, " ", 1);
	}
}

void	right_justify_string(t_format *fmt, char *s, int slen)
{
	if (fmt->hasprecision && slen > fmt->precision)
		slen = fmt->precision;
	if (fmt->width > slen)
	{
		while ((fmt->width--) - (slen) > 0)
			fmt->nprinted += write(1, " ", 1);
	}
	fmt->nprinted += write(1, s, slen);
}

void	print_string(t_format *fmt, va_list ap)
{
	char	*s;
	int		slen;

	if (!(s = (char *)va_arg(ap, char *)))
		s = "(null)";
	slen = (int)ft_strlen(s);
	if (!fmt->minus)
		right_justify_string(fmt, s, slen);
	else if (fmt->minus)
		left_justify_string(fmt, s, slen);
}
