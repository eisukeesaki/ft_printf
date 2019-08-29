/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:03:14 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/28 22:43:05 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dispatch(char c, t_format *recipe, va_list ap)
{
	if (c == 'c')
		return ; // avoid compilation error
		// print_char();
	else if (c == 's')
		return ; // avoid compilation error
		// print_string();
	else if (c == 'p')
		return ; // avoid compilation error
		// print_pointer();
	else if (c == 'd' || c == 'i')
		// return ; // avoid compilation error
		print_int(recipe, ap);
	else if (c == 'o')
		return ; // avoid compilation error
		// print_octal();
	else if (c == 'u')
		return ; // avoid compilation error
		// print_uint();
	else if (c == 'x')
		return ; // avoid compilation error
		// print_hex_lower();
	else if (c == 'X')
		return ; // avoid compilation error
		// print_hex_upper();
	else if (c == 'f')
		return ; // avoid compilation error
		// print_float();
}
