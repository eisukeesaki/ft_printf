/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtoa_wm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 22:43:35 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/18 21:18:30 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

static char	*populate_integer_array(int nb, size_t *dp, int *neg, int *zp)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!(s = ft_strnew(*dp)))
		return (NULL);
	if (neg)
		s[0] = '-';
	if (zp)
		s[*neg] = '0';
	while (nb > 0)
	{
		s[i] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (s);
}

static char *populate_fractional_array(int nb, size_t *dp, size_t *dgt)
{
	size_t	i;
	char	*s;

	i = (*dgt) - (*dp);
	if (!(s = ft_strnew((*dgt) - (*dp))))
		return (NULL);
	while (nb > 0)
	{
		s[i] = (nb % 10) + '0';
		i--;
		nb /= 10;
	}
	return (s);
}

static void	zero_point(int n, size_t *dp, int *neg, int *zp)
{
	int		nb;

	nb = n;
	if (nb < 0)
	{
		if (nb > -1)
			(*dp) = 2;
		else
			(*dp) = 1;
		*neg = 1;
		nb *= -1;
	}
	else
		nb < 1 ? (*dp) = 1 : 0;
	(nb < 0 && nb > -1) || (nb > 0 && nb < 1) ? (*zp) = 1 : 0;
}

static int	convert(double n, size_t *dp, int *neg, int *zp)
{
	double	nb;
	size_t	dgt;
	char	*itgr;
	char	*frctnl;
	size_t	i;

	nb = n;
	i = 0;
	zero_point(nb, &dp, &neg, &zp);
	while (nb >= 1)
	{
		nb /= 10;
		(*dp)++;
	}
	itgr =  populate_array(n, &dp, &neg, &zp);
	dgt = 6 + (*dp);
	while (i < dgt)
	{
		nb *= 10;
		i++;
	}
	frctnl = populate_fractional_array(n, &dp, &dgt);

}

char	*ft_dtoa(double n)
{
	int		nb;
	size_t	dp;
	int		neg;
	int		zp;

	if (n == 0)
		return (ft_strdup("0.000000"));
	dp = 0;
	zp = 0;
	neg = 0;
	nb = convert(n, &dp, &neg, &zp);
	return (populate_array(nb, &dp, &neg, &zp));
}


// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ftoa
int			main(void)
{
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< positive
	double	f = 0.123456;
	printf("mine:%s\n", ft_ftoa(f));

	double	f2 = 0.123456;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = 1.123456;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = 1.123456;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = 1234567891.123456;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = 1234567891.123456;
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

	f = -1.23456;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = -1.23456;
	printf("libc:%lf\n", f2);
	puts("\n");

	f = -1234567891.123456;
	printf("mine:%s\n", ft_ftoa(f));

	f2 = -1234567891.123456;
	printf("libc:%lf\n", f2);
	puts("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> negative
	return (0);
}
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ftoa

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