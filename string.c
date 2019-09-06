/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/05 20:27:09 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	print_string(t_format *recipe, va_list ap)
{
	char	*s;

	s = (char *)va_arg(ap, char *);
	if (recipe->width && recipe->minus == 0)
	{
		while (recipe->width-- > 1)
			recipe->nprinted += write(1, " ", 1);
		recipe->nprinted = write(1, &s, ft_strlen(s));
	}
	else if (recipe->width && recipe->minus == 1)
	{
		recipe->nprinted = write(1, &s, ft_strlen(s));
		while (recipe->width-- > 1)
			recipe->nprinted += write(1, " ", 1);
	}
	else
		recipe->nprinted = write(1, &s, ft_strlen(s));
}
