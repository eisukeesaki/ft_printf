/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdouble_wm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 22:43:35 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/20 00:33:28 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

static	int	remove_dp(double n)
{
	double	nb;

	nb = n;
	while (nb >= 1)
	{
		nb /= 10;
		(*dp)++;
	}
}

static void	zero_point(double n, size_t *dp, int *neg, int *zp)
{
	if (n < 0)
	{
		if (n > -1)
			(*dp) = 2;
		else
			(*dp) = 1;
		*neg = 1;
		n *= -1;
	}
	else
		n < 1 ? (*dp) = 1 : 0;
	(n < 0 && n > -1) || (n > 0 && n < 1) ? (*zp) = 1 : 0;
}

static char *populate_fractional_array(int nb)
{
	int		i;
	char	*s;

	i = 5;
	if (!(s = ft_strnew(6)))
		return (NULL);
	while (i >= 0)
	{
		s[i] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (s);
}

static char	*convert_fractional(double n, size_t *dp)
{
	double	nb;
	size_t	dgt;
	size_t	i;

	nb = n;
	dgt = 6 + (*dp);
	i = 0;
	while (i < dgt)
	{
		nb *= 10;
		i++;
	}
	return (populate_fractional_array((int)n));
}

static char	*populate_integer_array(int nb, size_t *dp, int *neg, int *zp)
{
	size_t	i;
	char	*s;

	i = *dp - 1;
	if (!(s = ft_strnew(*dp + *neg)))
		return (NULL);
	if (*neg)
		s[0] = '-';
	if (*zp)
		s[*neg] = '0';
	while (nb > 0)
	{
		s[i] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (s);
}

static char	*convert_integer(double n, size_t *dp, int *neg, int *zp)
{
	double	nb;
	size_t	i;

	nb = n;
	i = 0;
	while (nb >= 1)
	{
		nb /= 10;
		(*dp)++;
	}
	return (populate_integer_array((int)n, dp, neg, zp));
}

void		ft_putdouble(double n)
{
	size_t	dp;
	int		neg;
	int		zp;

	if (n == 0)
	{
		ft_putstr("0.000000");
		return ;
	}
	dp = 0;
	zp = 0;
	neg = 0;
	zero_point(n, &dp, &neg, &zp);
	ft_putstr(convert_integer(n, &dp, &neg, &zp));
	write(1, ".", 1);
	ft_putstr(convert_fractional(n, &dp));
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ftoa
int			main(void)
{
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< basic
	double	f = 789.123456;
	printf("mine:");
	ft_putdouble(f);
	puts("\n");

	double	f2 = 789.123456;
	printf("libc:%lf\n", f2);
	puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> basic

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< positive
	// double	f = 0.123456;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// double	f2 = 0.123456;
	// printf("libc:%lf\n", f2);
	// puts("\n");

	// f = 1.123456;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// f2 = 1.123456;
	// printf("libc:%lf\n", f2);
	// puts("\n");

	// f = 1234567891.123456;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// f2 = 1234567891.123456;
	// printf("libc:%lf\n", f2);
	// puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> positive

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0
	// f = 0;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// f2 = 0;
	// printf("libc:%lf\n", f2);
	// puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< negative
	// f = -0.123456;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// f2 = -0.123456;
	// printf("libc:%lf\n", f2);
	// puts("\n");

	// f = -1.23456;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// f2 = -1.23456;
	// printf("libc:%lf\n", f2);
	// puts("\n");

	// f = -1234567891.123456;
	// printf("mine:");
	// ft_putdouble(f);
	// puts("\n");

	// f2 = -1234567891.123456;
	// printf("libc:%lf\n", f2);
	// puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> negative

	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ftoa

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< backup
// static char	*populate_integer_array(int nb, size_t *dp, int *neg, int *zp)
// {
// 	size_t	i;
// 	char	*s;

// 	i = *dp - 1;
// 	if (!(s = ft_strnew(*dp)))
// 		return (NULL);
// 	if (*neg)
// 		s[0] = '-';
// 	if (*zp)
// 		s[*neg] = '0';
// 	while (nb > 0)
// 	{
// 		s[i] = (nb % 10) + '0';
// 		i--;
// 		nb /= 10;
// 	}
// 	return (s);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> backup

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
// long	ft_ftol(double n, size_t *dp, int *neg, int *zp)
// {
// 	double	f;
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

// char	*ft_ftoa(double n)
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
// 	double	f = 123.4567;
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
// long	ft_ftol(double n, size_t *dgt, size_t *dp, unsigned int *neg)
// {
// 	double	f;
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