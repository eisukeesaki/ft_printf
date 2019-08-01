/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:11:52 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/31 21:02:35 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
// #include "ft_printf.h"

// void	ft_puthex(int d, t_format format)
void		ft_puthex_upper(unsigned long long d)
{
	unsigned long long	n;
	int					rem;
	char				c;
	char				hex[21];
	int					i;

	n = d;
	c = 'F';
	i = 0;
	if (n == 0)
		hex[i++] = '0';
	else
		while (n)
		{
			rem = n % 16;
			n /= 16;
			if (rem >= 10)
				hex[i] = c - (15 - rem);
			else
				hex[i] = rem + '0';
			i++;
		}
	hex[i] = '\0';
	ft_putstr(ft_strrev(hex));
}
