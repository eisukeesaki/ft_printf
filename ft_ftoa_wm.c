/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa_wm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 22:43:35 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/16 22:55:49 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ftoa
int			main(void)
{
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< positive
	float	f = 0.123456;
	printf("mine:%s\n", ft_ftoa(f));

	float	f2 = 0.123456;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = 1.234567;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = 1.234567;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = 123.4567;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = 123.4567;
	printf("libc:%lf\n", f2);
	puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> positive
	f = 0;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = 0;
	printf("libc:%lf\n", f2);
	puts("\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< negative
	f = -0.123456;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = -0.123456;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = -1.234567;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = -1.234567;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = -123.4567;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = -123.4567;
	printf("libc:%lf\n", f2);
	puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> negative
	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ftoa

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// long	ft_ftol(float n, size_t *dp, int *neg, int *zp)
// {
// 	float	f;
// 	size_t	dgt;

// 	f = n;
// 	dgt = 7;
// 	if (f < 0) // negative
// 	{
// 		if (f > -1)
// 		{
// 			(*zp) = 1;
// 			(*dp) = 2;
// 		}
// 		else
// 			(*dp) = 1;
// 		*neg = 1;
// 		f *= -1;
// 	}
// 	else // positive
// 	{
// 		*neg = 0;
// 		if (f < 1)
// 		{
// 			(*zp) = 1;
// 			(*dp) = 1;
// 		}
// 	}
// 	while (f >= 1)
// 	{
// 		f /= 10;
// 			(*dp)++;
// 	}
// 	if (*zp)
// 		dgt--;
// 	while (dgt--)
// 		f *= 10;
// 	return ((long)f);
// }

// char	*ft_ftoa(float n)
// {
// 	long	nb;
// 	size_t	i;
// 	size_t	dp;
// 	char	*s;
// 	int		neg;
// 	int		zp;

// 	if (n == 0)
// 		return (ft_strdup("0.000000"));
// 	dp = 0;
// 	zp = 0;
// 	nb = ft_ftol(n, &dp, &neg, &zp);
// 	i = 7 + neg;
// 	s = ft_strnew(i);
// 	if (!s)
// 		return (NULL);
// 	if (neg)
// 		s[0] = '-';
// 	if (zp)
// 		s[neg] = '0';
// 	s[dp] = '.';
// 	while (nb > 0)
// 	{
// 		if (s[i] == '.')
// 			i--;
// 		else
// 		{
// 			s[i] = (nb % 10) + '0';
// 			i--;
// 			nb /= 10;
// 		}
// 	}
// 	return (s);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ftol backup
// long	ft_ftol(float n, size_t *dgt, size_t *dp, unsigned int *neg)
// {
// 	float	f;
// 	long	nb;
// 	size_t	i;

// 	f = n;
// 	*neg = f < 0 ? 1 : 0;
// 	i = 0;
// 	if (f < 0)
// 		f *= -1;
// 	// while (f / (int)f != 1) // *1
// 	while (i <= 6)
// 	{
// 		f = f * 10;
// 		(*dp)++;
// 		i++;
// 	}
// 	nb = (long)f;
// 	while (nb >= 10)
// 	{
// 		(*dgt)++;
// 		nb /= 10;
// 	}
// 	return (f);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ftol backup