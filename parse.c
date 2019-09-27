/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:40:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/27 07:06:29 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		sub_specifiers_dispatch(
					const char *format, t_format *fmt, size_t i, va_list ap)
{
	fmt->i = i;
	if (!ft_strchr(CONVERSIONS, format[i]))
		find_sub_specifiers(format, fmt, ap);
	else if (ft_strchr(CONVERSIONS, format[i]))
	{
		dispatch(format[i], fmt, ap);
		re_bzero_fmt(fmt);
	}
	return (fmt->i - 1);
}

ssize_t	parse(const char *format, t_format *fmt, va_list ap, size_t i)
{
	while (format[i])
	{
		if (format[i] != '%' && format[i])
			fmt->nprinted += write(1, &format[i], 1);
		else if (format[i] == '%')
		{
			if (!ft_strchr(ALLSYMBOLS, format[i + 1]))
				break ;
			while (ft_strchr(ALLSYMBOLS, format[i + 1]))
			{
				i++;
				if (ft_strchr(CONVERSIONS, format[i]))
				{
					i = sub_specifiers_dispatch(format, fmt, i, ap) + 2;
					break ;
				}
				else
					i = sub_specifiers_dispatch(format, fmt, i, ap);
			}
			continue;
		}
		i++;
	}
	return (fmt->nprinted);
}
