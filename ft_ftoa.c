/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 22:43:05 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/16 22:55:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static char	*populate_array(long nb, size_t *dp, int *neg, int *zp)
{
	char	*s;
	size_t	i;

	i = 7 + *neg;
	s = ft_strnew(i);
	if (!s)
		return (NULL);
	if (neg)
		s[0] = '-';
	if (zp)
		s[*neg] = '0';
	s[*dp] = '.';
	while (nb > 0)
	{
		if (s[i] == '.')
			i--;
		else
		{
			s[i] = (nb % 10) + '0';
			i--;
			nb /= 10;
		}
	}
	return (s);
}

static long	ftol(float n, size_t *dp, int *neg, int *zp)
{
	float	f;
	size_t	dgt;

	f = n;
	if (f < 0)
	{
		if (f > -1)
			(*dp) = 2;
		else
			(*dp) = 1;
		*neg = 1;
		f *= -1;
	}
	else
		f < 1 ? (*dp) = 1 : 0;
	(f < 0 && f > -1) || (f > 0 && f < 1) ? (*zp) = 1 : 0;
	while (f >= 1)
	{
		f /= 10;
		(*dp)++;
	}
	dgt = *zp ? 6 : 7;
	while (dgt--)
		f *= 10;
	return ((long)f);
}

char		*ft_ftoa(float n)
{
	long	nb;
	size_t	dp;
	int		neg;
	int		zp;

	if (n == 0)
		return (ft_strdup("0.000000"));
	dp = 0;
	zp = 0;
	neg = 0;
	nb = ftol(n, &dp, &neg, &zp);
	return (populate_array(nb, &dp, &neg, &zp));
}
