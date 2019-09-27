/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 05:38:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 05:56:03 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	int			format_len;
	t_format	*recipe;
	va_list		ap;
	ssize_t		printed_bytes;

	format_len = ft_strlen(format);
	if (!(recipe = (t_format *)malloc(sizeof(t_format))))
		return (0);
	bzero_recipe(recipe);
	recipe->format = (char *)format;
	va_start(ap, format);
	if (!format[0])
		return (0);
	if (format_len == 1 && format[0] == '%')
		return (0);
	else
		printed_bytes = parse(format, recipe, ap);
	va_end(ap);
	free(recipe);
	return (printed_bytes);
}
