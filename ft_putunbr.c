/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 16:49:41 by eesaki            #+#    #+#             */
/*   Updated: 2019/06/08 18:53:44 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_putunbr(unsigned int n)
{
	if (n >= 10)
		ft_putunbr(n / 10);
	ft_putchar(n % 10 + '0');
}
