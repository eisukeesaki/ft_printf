/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/29 01:29:28 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(t_format *fmt, va_list ap)
{
	char	c;

	c = (char)va_arg(ap, int);
	if (fmt->width && !fmt->minus)
	{
		while (fmt->width-- > 1)
			fmt->nprinted += write(1, " ", 1);
		fmt->nprinted += write(1, &c, 1);
	}
	else if (fmt->width && fmt->minus)
	{
		fmt->nprinted += write(1, &c, 1);
		while (fmt->width-- > 1)
			fmt->nprinted += write(1, " ", 1);
	}
	else
		fmt->nprinted += write(1, &c, 1);
}
