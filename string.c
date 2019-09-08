/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/07 22:51:49 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	left_justify_string(t_format *recipe, char *s, int slen)
{
	if (recipe->hasprecision && slen > recipe->precision)
		slen = recipe->precision;
	recipe->nprinted += write(1, s, slen);
	if (recipe->width > slen)
	{
		while ((recipe->width--) - (slen) > 0)
			recipe->nprinted += write(1, " ", 1);
	}
}

void	right_justify_string(t_format *recipe, char *s, int slen)
{
	if (recipe->hasprecision && slen > recipe->precision)
		slen = recipe->precision;
	if (recipe->width > slen)
	{
		while ((recipe->width--) - (slen) > 0)
			recipe->nprinted += write(1, " ", 1);
	}
	recipe->nprinted += write(1, s, slen);
}

void	print_string(t_format *recipe, va_list ap)
{
	char	*s;
	int		slen;

	if (!(s = (char *)va_arg(ap, char *)))
		s = "(null)";
	slen = (int)ft_strlen(s);
	if (recipe->minus != 0)
		left_justify_string(recipe, s, slen);
	else if (recipe->minus == 0)
		right_justify_string(recipe, s, slen);
}
