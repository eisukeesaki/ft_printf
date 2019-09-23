/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 03:13:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/23 03:17:54 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	right_justify_percent(t_format *recipe)
{
	char	pad;

	pad = (recipe->zero && !recipe->hasprecision) ? '0' : ' ';
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, &pad, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	while (recipe->precision-- > 0)
		recipe->nprinted += write(1, "0", 1);
	recipe->nprinted += write(1, "%", 1);
}

void	left_justify_percent(t_format *recipe)
{
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, "%", 1);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	print_percent(t_format *recipe)
{
	if (recipe->space)
		recipe->space = 0;
	recipe->width = recipe->width - (recipe->precision + recipe->space + 1);
	if (recipe->minus == 1)
		left_justify_percent(recipe);
	else if (recipe->minus == 0)
		right_justify_percent(recipe);
}
