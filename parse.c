/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:40:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/26 22:50:35 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		sub_specifiers_dispatch(const char *format, t_format *recipe, size_t i, va_list ap)
{
	recipe->i = i;
	if (!ft_strchr(CONVERSIONS, format[i]))
		find_sub_specifiers(format, recipe, ap);
	else if (ft_strchr(CONVERSIONS, format[i]))
	{
		dispatch(format[i], recipe, ap);
		re_bzero_recipe(recipe);
	}
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
					i = sub_specifiers_dispatch(format, recipe, i, ap) + 2;
					break ;
				}
				else
					i = sub_specifiers_dispatch(format, recipe, i, ap);
			}
			continue;
		}
		i++;
	}
	return (recipe->nprinted);
}
