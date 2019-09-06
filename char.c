/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/05 19:31:21 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_char(t_format *recipe, va_list ap)
{
	char	c;

	c = (unsigned char)va_arg(ap, int);
	if (recipe->width && recipe->minus == 0)
	{
		while (recipe->width-- > 1)
			recipe->nprinted += write(1, " ", 1);
		recipe->nprinted = write(1, &c, 1);
	}
	else if (recipe->width && recipe->minus == 1)
	{
		recipe->nprinted = write(1, &c, 1);
		while (recipe->width-- > 1)
			recipe->nprinted += write(1, " ", 1);
	}
	else
		recipe->nprinted = write(1, &c, 1);
}
