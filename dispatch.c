/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 20:03:14 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/28 04:07:28 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dispatch(char c, t_format *fmt, va_list ap)
{
	if (c == 'c')
		print_char(fmt, ap);
	else if (c == 's')
		print_string(fmt, ap);
	else if (c == 'd' || c == 'i')
		print_int(fmt, ap);
	else if (c == 'u')
		print_uint(fmt, ap);
	else if (c == 'o')
		print_octal(fmt, ap);
	else if (c == 'x' || c == 'X')
		print_hex((const char)c, fmt, ap);
	else if (c == 'p')
		print_pointer(fmt, ap);
	else if (c == 'f')
		print_float(fmt, ap);
	else if (c == '%')
		print_percent(fmt);
}
