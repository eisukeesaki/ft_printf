/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 02:33:54 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_pointer(char *s, int intlen, t_format *recipe)
{
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
	recipe->nprinted += write(1, "0x", 2);
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_pointer(char *s, int intlen, t_format *recipe)
{
	recipe->nprinted += write(1, "0x", 2);
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	sub_specifiers_pointer(uintmax_t n, t_format *recipe)
{
	char	*s;
	int		intlen;

	s = uitoa_base(n, 16);
	intlen = ft_strlen(s);
	recipe->width -= intlen + 2;
	if (recipe->minus)
		left_justify_pointer(s, intlen, recipe);
	else if (!recipe->minus)
		right_justify_pointer(s, intlen, recipe);
	free(s);
}

void	print_pointer(t_format *recipe, va_list ap)
{
	uintmax_t	p;

	p = (unsigned long long)va_arg(ap, unsigned long long);
	sub_specifiers_pointer(p, recipe);
}
