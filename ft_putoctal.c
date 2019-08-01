/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:21:17 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/31 19:41:41 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
// #include "ft_printf.h"

void		ft_putoctal(unsigned long long d)
{
	unsigned long long	n;
	int					rem;
	char				octal[21];
	int					i;

	n = d;
	i = 0;
	if (n == 0)
		octal[i++] = '0';
	else
		while (n)
		{
			rem = n % 8;
			n /= 8;
			octal[i] = rem + '0';
			i++;
		}
	octal[i] = '\0';
	ft_putstr(ft_strrev(octal));
}
