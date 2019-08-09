/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_puthex_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 19:11:52 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/09 16:36:41 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdio.h>
#include <limits.h>
// #include "ft_printf.h"

void		ft_puthex_lower(unsigned long long d);

int		main(void)
{
	// short				n = SHRT_MIN;
	// short				n = SHRT_MAX;
	// unsigned short		n = USHRT_MAX;

	// int					n = INT_MIN;
	// int					n = INT_MAX;
	// unsigned			n = UINT_MAX;

	// long				n = LONG_MIN;
	// long				n = LONG_MAX;
	// unsigned long		n = ULONG_MAX;

	// long long			n = LLONG_MIN;
	// long long			n = LONG_MAX;
	// unsigned long long	n = ULLONG_MAX;

	int						n = 123456789;


	// while (n < 100)
	// {
		printf("libc:%x\n", n);
		ft_putstr("mine:");
		ft_puthex_lower(n);
		ft_putstr("\n\n");
	// 	n++;
	// }
	return (0);
}

/*
478 / 16 => 29 R14
 29 / 16 =>  1 R13
  1 / 16 =>  0 R 1

 1,13,14
 1  D  E
 */