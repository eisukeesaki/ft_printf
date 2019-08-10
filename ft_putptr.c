/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 17:07:17 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/09 17:42:08 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
// #include <stdio.h>

void		ft_puthex_lower(unsigned long long d);

void	ft_putptr(void *p)
{
	ft_putstr("0x");
	ft_puthex_lower((unsigned long long)p);
}

// int		main(void)
// {
// 	double	n;
// 	double	*ptr;

// 	n = 5;
// 	ptr = &n;
// 	ft_putptr(ptr);
// 	putchar('\n');
// 	printf("%p", ptr);

// 	return (0);
// }