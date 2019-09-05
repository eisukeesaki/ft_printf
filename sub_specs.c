/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_specs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 19:32:44 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/04 18:46:27 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	flags(const char *format, t_format *recipe)
{
	while (ft_strchr(FLAGS, format[recipe->i]))
	{
		if (format[recipe->i] == '#')
			recipe->hash = 1;
		else if (format[recipe->i] == '0')
			recipe->zero = 1;
		else if (format[recipe->i] == '-')
			recipe->minus = 1;
		else if (format[recipe->i] == '+')
			recipe->plus = 1;
		else if (format[recipe->i] == ' ')
			recipe->space = 1;
		recipe->i++;
	}
	if (recipe->plus)
		recipe->space = 0;
}

void	width(const char *format, t_format *recipe, va_list ap)
{
	if ('0' <= format[recipe->i] && format[recipe->i] <= '9')
	{
		recipe->width = ft_atoi(&format[recipe->i]);
		while ('0' <= format[recipe->i] && format[recipe->i] <= '9')
			recipe->i++;
	}
	else if (format[recipe->i] == '*')
	{
		recipe->width = (int)va_arg(ap, int);
		while (format[recipe->i] == '*')
			recipe->i++;
	}
}

void	precision(const char *format, t_format *recipe)
{
	if (format[recipe->i] == '.')
	{
		recipe->i++;
		recipe->hasprecision = 1;
		if (format[recipe->i] >= '0' && format[recipe->i] <= '9')
		{
			recipe->precision = ft_atoi(&format[recipe->i]);
		while ('0' <= format[recipe->i] && format[recipe->i] <= '9')
			recipe->i++;
		}
	}
}

void	length(const char* format, t_format *recipe)
{
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
}

void		sub_specs(const char* format, t_format *recipe, va_list ap)
{
	flags(format, recipe);
	width(format, recipe, ap);
	precision(format, recipe);
	length(format, recipe);
}
