/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:24:58 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/14 20:47:23 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

intmax_t	power(intmax_t base, intmax_t exponent)
{
	intmax_t	res;

	res = base;
	while (1 < exponent)
	{
		res *= base;
		exponent--;
	}
	return (res);
}
