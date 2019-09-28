/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_sub_specifiers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 06:55:43 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/28 00:16:18 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	flags(const char *format, t_format *fmt)
{
	while (ft_strchr(FLAGS, format[fmt->i]))
	{
		if (format[fmt->i] == '#')
			fmt->hash = 1;
		else if (format[fmt->i] == '0')
			fmt->zero = 1;
		else if (format[fmt->i] == '-')
			fmt->minus = 1;
		else if (format[fmt->i] == '+')
			fmt->plus = 1;
		else if (format[fmt->i] == ' ')
			fmt->space = 1;
		fmt->i++;
	}
	if (fmt->plus)
		fmt->space = 0;
}

void	width(const char *format, t_format *fmt, va_list ap)
{
	if ('0' <= format[fmt->i] && format[fmt->i] <= '9')
	{
		fmt->width = ft_atoi(&format[fmt->i]);
		while ('0' <= format[fmt->i] && format[fmt->i] <= '9')
			fmt->i++;
	}
	else if (format[fmt->i] == '*')
	{
		fmt->width = (int)va_arg(ap, int);
		while (format[fmt->i] == '*')
			fmt->i++;
	}
}

void	precision(const char *format, t_format *fmt)
{
	if (format[fmt->i] == '.')
	{
		fmt->i++;
		fmt->hasprecision = 1;
		if (format[fmt->i] >= '0' && format[fmt->i] <= '9')
		{
			fmt->precision = ft_atoi(&format[fmt->i]);
			while ('0' <= format[fmt->i] && format[fmt->i] <= '9')
				fmt->i++;
		}
	}
}

void	length(const char *format, t_format *fmt)
{
	size_t	i;

	i = fmt->i;
	if (ft_strchr(LENGTH, format[i]))
	{
		if (format[i] == 'h')
		{
			fmt->length = 1;
			if (format[i + 1] == 'h')
				fmt->length = 2;
		}
		if (format[i] == 'l')
		{
			fmt->length = 3;
			if (format[i + 1] == 'l')
				fmt->length = 4;
		}
		if (format[i] == 'L')
			fmt->length = 5;
	}
	while (ft_strchr(LENGTH, format[i]))
		i++;
	fmt->i = i;
}

void	find_sub_specifiers(const char *format, t_format *fmt, va_list ap)
{
	flags(format, fmt);
	width(format, fmt, ap);
	precision(format, fmt);
	length(format, fmt);
}
