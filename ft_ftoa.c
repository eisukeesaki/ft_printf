/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 19:35:49 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/09 20:56:5 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

size_t	ft_count_fdigit(float n)
{
	size_t	i;
	long	nb;

	i = 1;
	while (n / (int)n != 1)
	{
		n = n * 10;
	}
	nb = (long)n;
	while (nb >= 10)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*ft_ftoa(int n)
{
	long		nb;
	size_t		dgt;
	char		*s;
	unsigned	neg;

	nb = n;
	neg = n < 0 ? 1 : 0;
	dgt = ft_count_digit(nb);
	s = ft_strnew(dgt + neg);
	if (!s)
		return (NULL);
	if (neg)
	{
		nb = -nb;
		s[0] = '-';
	}
	while (dgt > 0)
	{
		s[dgt + neg - 1] = (nb % 10) + '0';
		dgt--;
		nb /= 10;
	}
	return (s);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ftoa
// int		main(void)
// {
// 	float	f = 123.4567;

// 	ft_putstr(ft_ftoa(f));

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ftoa

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< count digit
int		main(void)
{
	float	f = 123.4567;

	printf("ft_count_digit:%lu\n", ft_count_fdigit(f));

	return (0);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< original itoa
// char	*ft_itoa(int n)
// {
// 	long		nb;
// 	size_t		dgt;
// 	char		*s;
// 	unsigned	neg;

// 	nb = n;
// 	neg = n < 0 ? 1 : 0;
// 	dgt = ft_count_digit(nb);
// 	s = ft_strnew(dgt + neg);
// 	if (!s)
// 		return (NULL);
// 	if (neg)
// 	{
// 		nb = -nb;
// 		s[0] = '-';
// 	}
// 	while (dgt > 0)
// 	{
// 		s[dgt + neg - 1] = (nb % 10) + '0';
// 		dgt--;
// 		nb /= 10;
// 	}
// 	return (s);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> original itoa

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< original count digit
// size_t	ft_count_digit(long n)
// {
// 	size_t	i;

// 	i = 1;
// 	if (n < 0)
// 		n = -n;
// 	while (n >= 10)
// 	{
// 		i++;
// 		n /= 10;
// 	}
// 	return (i);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> original count digit