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

long	ft_ftol(float n, size_t *dgt, size_t *dp, unsigned int *neg)
{
	float	f;
	long	nb;

	f = n;
	*neg = f < 0 ? 1 : 0;
	if (f < 0)
		f *= -1;
	while (f / (int)f != 1) // *1
	{
		f = f * 10;
		(*dp)++;
	}
	nb = (long)f;
	while (nb >= 10)
	{
		(*dgt)++;
		nb /= 10;
	}
	return (f);
}

/*
TODO
- change *1's loop condition to absolute precision
- redesign algorithm to find dp position
- store all digits (absolute precision), sign, dp to array
*/

char	*ft_ftoa(float n)
{
	long			nb;
	size_t			dgt;
	size_t			dp;
	char			*s;
	unsigned int	neg;

	dgt = 1;
	dp = 0;
	nb = ft_ftol(n, &dgt, &dp, &neg);
	s = ft_strnew(dgt + neg + 1);
	dp = dgt - dp;
	dgt++;
	if (!s)
		return (NULL);
	if (neg)
	{
		s[0] = '-';
		dgt++;
		dp++;
	}
	s[dp] = '.';
	while (dgt > 0)
	{
		if (s[dgt - 1] == '.')
			dgt--;
		else
		{
			s[dgt + neg - 1] = (nb % 10) + '0';
			dgt--;
			nb /= 10;
		}
	}
	return (s);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ftoa
int		main(void)
{
	float	f = -123.456;
	printf("mine:%s\n", ft_ftoa(f));

	// double	f2 = 123456789.123456;
	// printf("libc:%lf\n", f2);

	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ftoa

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< count digit
// int		main(void)
// {
// 	float	f = 123.4567;
// 	size_t	dgt = 0;

// 	printf("ft_count_digit:%lu\n", ft_ftol(f, dgt));

// 	return (0);
// }

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