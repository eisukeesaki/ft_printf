/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/04 21:59:44 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	print_char(t_format *recipe, va_list ap)
{
	char	c;

	c = (unsigned char)va_arg(ap, int);
	recipe->nprinted = write(1, &c, 1);
}