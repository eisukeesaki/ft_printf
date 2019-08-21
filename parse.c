/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:40:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/20 22:38:24 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	sub_specs(const char* format, t_format *recipe, va_list ap);
void	dispatch(char c, t_format *recipe, va_list ap);

int		parse_specs(const char *format, t_format *recipe, size_t i, va_list ap)
{
	recipe->i = i;
	if (!ft_strchr(CONVERSIONS, format[i]))
		sub_specs(format, recipe, ap);
	else if (ft_strchr(CONVERSIONS, format[i]))
		dispatch(format[i], recipe, ap);
	return (recipe->i - 1);
}

ssize_t	parse(const char *format, t_format *recipe, va_list ap)
{
	size_t	i;
	
	i = 0;
	while (format[i])
	{
		if (format[i] != '%' && format[i])
			recipe->nprinted += write(1, &format[i], 1);
		else if (format[i] == '%')
		{
			if (!ft_strchr(ALLSYMBOLS, format[i + 1]))
				break;
			while (ft_strchr(ALLSYMBOLS, format[i + 1]))
			{
				i++;
				if (ft_strchr(CONVERSIONS, format[i]))
				{
					i = parse_specs(format, recipe, i, ap) + 2;
					break ;
				}
				else
					i = parse_specs(format, recipe, i, ap);
			}
			continue;
		}
		i++;
	}
	return (recipe->nprinted);
}
