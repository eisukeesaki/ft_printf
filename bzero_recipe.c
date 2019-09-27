/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_recipe.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:39:39 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 06:09:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	bzero_recipe(t_format *recipe)
{
	recipe->format = 0;
	recipe->nprinted = 0;
	recipe->i = 0;
	recipe->hash = 0;
	recipe->zero = 0;
	recipe->minus = 0;
	recipe->plus = 0;
	recipe->space = 0;
	recipe->width = 0;
	recipe->hasprecision = 0;
	recipe->precision = 0;
	recipe->length = 0;
}

void	re_bzero_recipe(t_format *recipe)
{
	recipe->hash = 0;
	recipe->zero = 0;
	recipe->minus = 0;
	recipe->plus = 0;
	recipe->space = 0;
	recipe->width = 0;
	recipe->hasprecision = 0;
	recipe->precision = 0;
	recipe->length = 0;
}
