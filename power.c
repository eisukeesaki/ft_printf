/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:24:58 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/22 04:14:34 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long double		power(intmax_t base, intmax_t exponent)
{
	long double	res;

	res = base;
	if (exponent == 0)
		return ((long double)1);
	while (1 < exponent)
	{
		res *= base;
		exponent--;
	}
	return (res);
}
