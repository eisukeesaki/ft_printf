/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:03:14 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/23 03:06:06 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dispatch(char c, t_format *recipe, va_list ap)
{
	if (c == 'c')
		print_char(recipe, ap);
	else if (c == 's')
		print_string(recipe, ap);
	else if (c == 'p')
		print_pointer(recipe, ap);
	else if (c == 'd' || c == 'i')
		print_int(recipe, ap);
	else if (c == 'o')
		print_octal(recipe, ap);
	else if (c == 'u')
		print_uint(recipe, ap);
	else if (c == 'x' || c == 'X')
		print_hex((const char)c, recipe, ap);
	else if (c == 'f')
		print_float(recipe, ap);
	else if (c == '%')
		print_percent(recipe);
}
