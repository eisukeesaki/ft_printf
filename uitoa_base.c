/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitoa_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:24:03 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/28 00:21:17 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	count_digit_u(uintmax_t n, int base)
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

char	*itoa_u(uintmax_t n, int base)
{
	uintmax_t	nb;
	size_t		dgt;
	char		*s;

	nb = n;
	dgt = count_digit_u(nb, base);
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

char	*toa_u(uintmax_t n, int base)
{
	size_t	dgt;
	char	*s;
	size_t	i;
	int		rem;
	char	c;

	dgt = count_digit_u(n, base);
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

char	*uitoa_base(uintmax_t n, int base)
{
	if (base == 10)
		return (itoa_u(n, base));
	else if (base >= 2 && base <= 16 && base != 10)
		return (toa_u(n, base));
	else
		return (NULL);
}
