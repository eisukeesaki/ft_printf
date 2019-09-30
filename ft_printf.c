/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 05:38:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/30 06:56:11 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int			format_len;
	t_format	*fmt;
	va_list		ap;
	ssize_t		printed_bytes;

	format_len = ft_strlen(format);
	if (!(fmt = (t_format *)malloc(sizeof(t_format))))
		return (1);
	ft_bzero(fmt, sizeof(t_format));
	fmt->format = (char *)format;
	va_start(ap, format);
	if (!format[0])
		return (0);
	if (format_len == 1 && format[0] == '%')
		return (0);
	else
		printed_bytes = parse(format, fmt, ap, 0);
	va_end(ap);
	free(fmt);
	return (printed_bytes);
}
