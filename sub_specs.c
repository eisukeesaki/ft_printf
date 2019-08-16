/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_specs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:32:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/15 19:33:00 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	flags(const char *format, t_format *recipe)
void	flags(void)
{
	printf("flags() called\n");
	// while (ft_strchr(FLAGS, format[recipe->i]))
	// {
	// 	if (format[recipe->i] == '#')
	// 		recipe->hash = 1;
	// 	else if (format[recipe->i] == '0')
	// 		recipe->zero = 1;
	// 	else if (format[recipe->i] == '-')
	// 		recipe->minus = 1;
	// 	else if (format[recipe->i] == '+')
	// 		recipe->plus = 1;
	// 	else if (format[recipe->i] == ' ')
	// 		recipe->space = 1;
	// 	recipe->i++;
	// }
	// TODO: manage case: '+' and ' ' combination
}

// void	width(const char *format, t_format *recipe)
void	width(void)
{
	printf("width() called\n");
}

void	precision(void)
{
	printf("precision() called\n");
}

void	length(const char* format, t_format *recipe)
{
		printf("length() called\n");
	size_t	i;

	i = recipe->i;
	if (ft_strchr(LENGTH, format[i]))
	{
		if (format[i] == 'h')
		{
			recipe->length = 1;
			if (format[i + 1] == 'h')
				recipe->length = 2;
		}
		if (format[i] == 'l')
		{
			recipe->length = 3;
			if (format[i + 1] == 'l')
				recipe->length = 4;
		}
		if (format[i] == 'L')
			recipe->length = 5;
	}
	while (ft_strchr(LENGTH, format[i]))
		i++;
	recipe->i = i;
		printf("recipe->length:%d\n", recipe->length);
}

void	sub_specs(const char* format, t_format *recipe, va_list ap)
{
		ft_putstr("sub_specs called");
	flags();
	width();
	precision();
	length(format, recipe);
}
