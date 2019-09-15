/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:21:04 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/12 21:44:02 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

long double	my_fmod(double n, double div)
{
	return (n - div * (long long)(n / div));
}

long long	my_pow(int base, int exponent)
{
	long long	res;

	res = base;
	while (1 < exponent)
	{
		res *= base;
		exponent--;
	}
	return (res);
}


static char			*assign_int_part(long double n, size_t len)
{
	char		*s;
	size_t		i;

	if (len == 0)
	{
		s = ft_strnew(2);
		s[0] = '0';
		s[1] = '.';
		return (s);
	}
	s = ft_strnew(len + 1);
	i = 0;
	while (i < len)
	{
		s[i] = ((long long)my_fmod(n, 10)) + '0';
		n /= 10;
		i++;
	}
	s = ft_strrev(s);
	s[i] = '.';
	return (s);
}

static char			*assign_frac_part(long double n, int prec)
{
	char		*s;
	long double	nb;
	int			i;

	s = ft_strnew(prec);
	nb = (n - (long long)n) * my_pow(10, prec);
	i = 0;
	while (i < prec)
	{
		s[i] = ((long long)my_fmod(nb, 10)) + '0';
		nb /= 10;
		i++;
	}
	s = ft_strrev(s);
	return (s);
}

static size_t		ct_int_part(long double n)
{
	size_t		len;

	len = 0;
	while (n > 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static long double	check_neg(long double n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (-n);
	}
	return (n);
}

char				*ftoa(long double n, int prec)
{
	char		*int_part;
	char		*frac_part;
	char		*s;
	size_t		len;
	long double	nb;

	nb = check_neg(n);
	len = ct_int_part(nb);
	int_part = assign_int_part(nb, len);
	frac_part = assign_frac_part(nb, prec);
	s = ft_strjoin(int_part, frac_part);
	free(int_part);
	free(frac_part);
	return (s);
}
