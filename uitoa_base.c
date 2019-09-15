/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitoa_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:24:03 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/14 23:53:31 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft/libft.h"
#include <limits.h>

size_t	count_digit_u(uintmax_t n)
{
	size_t	i;

	i = 1;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*itoa_u(uintmax_t n)
{
	uintmax_t	nb;
	size_t		dgt;
	char		*s;

	nb = n;
	dgt = count_digit_u(nb);
	s = ft_strnew(dgt);
	if (!s)
		return (NULL);
	while (dgt > 0)
	{
		s[dgt - 1] = (nb % 10) + '0';
		dgt--;
		nb /= 10;
	}
	return (s);
}

char	*toa_u(uintmax_t n, uintmax_t base)
{
	size_t	dgt;
	char	*s;
	size_t	i;
	int		rem;
	char	c;

	dgt = count_digit_u(n);
	s = ft_strnew(dgt);
	i = 0;
	c = 'a';
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

// char	*itoa_base(intmax_t n, uintmax_t base) // 1
char	*uitoa_base(uintmax_t n, uintmax_t base) // 2
{
	// if (n == LONG_MIN) // 1
	// 	return ("9223372036854775808");
	if (n == ULONG_MAX && base == 10) // 2
		return ("18446744073709551615");
	else if (base == 10)
		return (itoa_u(n));
	else if (base >= 2 && base <= 16 && base != 10)
		return (toa_u(n, base));
	else
		return (NULL);
}
