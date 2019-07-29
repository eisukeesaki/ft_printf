/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 18:21:17 by eesaki            #+#    #+#             */
/*   Updated: 2019/07/29 00:03:54 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
// #include "ft_printf.h"

static void	output(long n)
{
	if (n >= 10)
		output(n / 10);
	ft_putchar(n % 10 + '0');
}

static void	ft_putlong(long n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	output(nb);
}

// void	ft_putoctal(int d, t_format format)
void		ft_putoctal(int d)
{
	long	n;
	long	rem;
	long	shift;

	n = (long)d;
	rem = 0;
	shift = 1;
	while (n)
	{
		shift *= 10;
		rem += (n % 8) * shift;
		n /= 8;
	}
	ft_putlong(rem / 10);
}
