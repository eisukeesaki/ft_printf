/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:24:03 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/22 23:11:39 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft/libft.h"
#include <limits.h>

size_t	count_digit(intmax_t n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		if (n == LONG_MIN)
			return (19);
		else
			n *= -1;
	}
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*itoa(intmax_t n)
{
	intmax_t	nb;
	size_t		dgt;
	char		*s;
	unsigned	neg;

	nb = n;
	neg = n < 0 ? 1 : 0;
	dgt = count_digit(nb);
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

char	*toa(intmax_t n, uintmax_t base)
{
	size_t	dgt;
	char	*s;
	size_t	i;
	int		rem;
	char	c;

	dgt = count_digit(n);
	s = ft_strnew(dgt);
	i = 0;
	c = 'A';
	if (n == 0)
		s[i++] = '0';
	else
		while (n)
		{
			rem = n % base;
			n /= base;
			if (rem >= 10)
				s[i] = c + (rem - 10);
			else
				s[i] = rem + '0';
			i++;
		}
	s[i] = '\0';
	return (ft_strrev(s));
}

char	*itoa_base(intmax_t n, uintmax_t base)
{
	if (n == LONG_MIN)
		return ("-9223372036854775808");
	else if (base == 10)
		return (itoa(n));
	else if (base >= 2 && base <= 16 && base != 10)
		return (toa(n, base));
	else
		return (NULL);
}
