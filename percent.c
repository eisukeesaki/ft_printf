/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:13:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 06:18:47 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	right_justify_percent(t_format *fmt)
{
	char	pad;

	pad = (fmt->zero && !fmt->hasprecision) ? '0' : ' ';
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, &pad, 1);
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	while (fmt->precision-- > 0)
		fmt->nprinted += write(1, "0", 1);
	fmt->nprinted += write(1, "%", 1);
}

void	left_justify_percent(t_format *fmt)
{
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	while (fmt->precision > 0)
	{
		fmt->nprinted += write(1, "0", 1);
		fmt->precision--;
	}
	fmt->nprinted += write(1, "%", 1);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
}

void	print_percent(t_format *fmt)
{
	if (fmt->space)
		fmt->space = 0;
	fmt->width = fmt->width - (fmt->precision + fmt->space + 1);
	if (fmt->minus)
		left_justify_percent(fmt);
	else if (fmt->minus == 0)
		right_justify_percent(fmt);
}
