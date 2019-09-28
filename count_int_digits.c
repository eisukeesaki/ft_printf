/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_int_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:03:22 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/28 00:21:26 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		count_int_digits(intmax_t n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}
