/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_fmt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 06:21:04 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 06:21:05 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	bzero_fmt(t_format *fmt)
{
	fmt->format = 0;
	fmt->nprinted = 0;
	fmt->i = 0;
	fmt->hash = 0;
	fmt->zero = 0;
	fmt->minus = 0;
	fmt->plus = 0;
	fmt->space = 0;
	fmt->width = 0;
	fmt->hasprecision = 0;
	fmt->precision = 0;
	fmt->length = 0;
}

void	re_bzero_fmt(t_format *fmt)
{
	fmt->hash = 0;
	fmt->zero = 0;
	fmt->minus = 0;
	fmt->plus = 0;
	fmt->space = 0;
	fmt->width = 0;
	fmt->hasprecision = 0;
	fmt->precision = 0;
	fmt->length = 0;
}
