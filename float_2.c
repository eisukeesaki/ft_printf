/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/30 04:29:38 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	left_justify_float(t_format *fmt, t_float *fl)
{
	size_t	i;

	i = 0;
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	if (fl->hassign)
		fmt->nprinted += write(1, &fl->sign, 1);
	while (fl->int_s[i])
		fmt->nprinted += write(1, &fl->int_s[i++], 1);
	if (fl->dot)
	{
		fmt->nprinted += write(1, ".", 1);
		while (fl->zeros-- > 0 && fl->precision-- != 0)
			fmt->nprinted += write(1, "0", 1);
		i = 0;
		while (fl->frac_s[i] && fl->precision != 0)
		{
			fmt->nprinted += write(1, &fl->frac_s[i++], 1);
			fl->precision--;
		}
	}
	while (fl->pad-- > 0)
		write(1, &fl->pad_char, 1);
}

void	sign_and_width(t_format *fmt, t_float *fl)
{
	if (fl->pad_char == '0' && fmt->width > 0)
	{
		if (fmt->space)
		{
			fmt->nprinted += write(1, " ", 1);
			fmt->space = 0;
		}
		if (fl->hassign)
		{
			fmt->nprinted += write(1, &fl->sign, 1);
			fl->hassign = 0;
		}
	}
}

void	right_justify_float(t_format *fmt, t_float *fl)
{
	size_t	i;

	i = 0;
	sign_and_width(fmt, fl);
	while (fl->pad-- > 0)
		fmt->nprinted += write(1, &fl->pad_char, 1);
	if (fmt->space)
		fmt->nprinted += write(1, " ", 1);
	if (fl->hassign)
		fmt->nprinted += write(1, &fl->sign, 1);
	while (fl->int_s[i])
		fmt->nprinted += write(1, &fl->int_s[i++], 1);
	if (fl->dot)
	{
		fmt->nprinted += write(1, ".", 1);
		while (fl->zeros-- > 0 && fl->precision-- != 0)
			fmt->nprinted += write(1, "0", 1);
		i = 0;
		while (fl->frac_s[i] && fl->precision != 0)
		{
			fmt->nprinted += write(1, &fl->frac_s[i++], 1);
			fl->precision--;
		}
	}
}

void	justify(t_format *fmt, t_float *fl)
{
	if (!fmt->minus)
		right_justify_float(fmt, fl);
	else if (fmt->minus)
		left_justify_float(fmt, fl);
}

void	format_2(t_format *fmt, t_float *fl)
{
	if (fl->precision != 0)
		fl->zeros = fl->precision - count_int_digits(fl->frac_ld);
	else
		fl->zeros = 0;
	fl->intlen = count_int_digits(fl->int_ld);
	fl->dot = 0;
	if ((ft_strlen(fl->frac_s) && fl->precision != 0) || (fmt->hash))
		fl->dot = 1;
	fl->pad = fmt->width -
			fmt->space - fl->hassign - fl->intlen - fl->dot - fmt->precision;
}
