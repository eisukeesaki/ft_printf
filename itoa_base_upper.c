/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:24:03 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 05:30:23 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft/libft.h"

size_t	count_digit_upper(uintmax_t n, int base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long)base)
	{
		i++;
		n /= base;
	}
	return (i);
}

char	*itoa_upper(intmax_t n, int base)
{
	intmax_t	nb;
	size_t		dgt;
	char		*s;
	unsigned	neg;

	nb = n;
	neg = n < 0 ? 1 : 0;
	dgt = count_digit_upper(nb, base);
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

char	*toa_upper(intmax_t n, int base)
{
	size_t	dgt;
	char	*s;
	size_t	i;
	int		rem;
	char	c;

	dgt = count_digit_upper(n, base);
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

char	*itoa_base_upper(intmax_t n, int base)
{
	if (base == 10)
		return (itoa_upper(n, base));
	else if (base >= 2 && base <= 16 && base != 10)
		return (toa_upper(n, base));
	else
		return (NULL);
}
