/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_int_digits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:03:22 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/21 23:57:57 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

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
