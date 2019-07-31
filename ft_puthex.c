/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:11:52 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/30 22:43:46 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
// #include "ft_printf.h"

// void	ft_puthex(int d, t_format format)
void		ft_puthex(int d)
{
	int		n;
	int		rem;
	char	c;
	char	hex[16];
	int		i;

	n = d;
	rem = 0;
	c = 'A';
	hex[0] = '\0';
	i = 0;
	while (n)
	{
		rem = n % 16;
		n /= 16;
		if (rem > 10)
			hex[i] = c + (16 - rem);
		else
			hex[i] = rem + '0';
		i++;
	}
	ft_putstr(hex);
}

int		main(void)
{
	int	n = 438975;

	printf("libc:%X\n", n);
	ft_putstr("mine:");
	ft_puthex(n);

	return (0);
}
