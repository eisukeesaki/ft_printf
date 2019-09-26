/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/26 02:18:25 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	sign_and_width(t_format *recipe, t_float *fl)
{
	if (fl->padc == '0' && recipe->width > 0)
	{
		if (recipe->space)
		{
			recipe->nprinted += write(1, " ", 1);
			recipe->space = 0;
		}
		if (fl->hassign)
		{
			recipe->nprinted += write(1, &fl->sign, 1);
			fl->hassign = 0;
		}
	}
}

void	right_justify_float(t_format *recipe, t_float *fl)
{
	size_t	i;

	i = 0;
	sign_and_width(recipe, fl);
	while (fl->npad-- > 0)
		recipe->nprinted += write(1, &fl->padc, 1);
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (fl->hassign)
		recipe->nprinted += write(1, &fl->sign, 1);
	while (fl->int_s[i])
		recipe->nprinted += write(1, &fl->int_s[i++], 1);
	if (fl->dot)
	{
		recipe->nprinted += write(1, ".", 1);
		while (fl->zeros-- > 0 && fl->precision-- != 0)
			recipe->nprinted += write(1, "0", 1);
		i = 0;
		while (fl->frac_s[i] && fl->precision != 0)
		{
			recipe->nprinted += write(1, &fl->frac_s[i++], 1);
			fl->precision--;
		}
	}
}

void	left_justify_float(t_format *recipe, t_float *fl)
{
	size_t	i;

	i = 0;
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (fl->hassign)
		recipe->nprinted += write(1, &fl->sign, 1);
	while (fl->int_s[i])
		recipe->nprinted += write(1, &fl->int_s[i++], 1);
	if (fl->dot)
	{
		recipe->nprinted += write(1, ".", 1);
		while (fl->zeros-- > 0 && fl->precision-- != 0)
			recipe->nprinted += write(1, "0", 1);
		i = 0;
		while (fl->frac_s[i] && fl->precision != 0)
		{
			recipe->nprinted += write(1, &fl->frac_s[i++], 1);
			fl->precision--;
		}
	}
	while (fl->npad-- > 0)
		write(1, &fl->padc, 1);
}

void	justify(t_format *recipe, t_float *fl)
{
	if (recipe->minus)
		left_justify_float(recipe, fl);
	else if (!recipe->minus)
		right_justify_float(recipe, fl);
}

void	format_2(t_format *recipe, t_float *fl)
{
	if (fl->precision != 0)
		fl->zeros = fl->precision - count_int_digits(fl->frac_ld);
	else
		fl->zeros = 0;
	fl->intlen = count_int_digits(fl->int_ld);
	fl->dot = 0;
	if ((ft_strlen(fl->frac_s) && fl->precision != 0) || (recipe->hash))
		fl->dot = 1;
	fl->npad = recipe->width - recipe->space - fl->hassign - fl->intlen - fl->dot - recipe->precision;
}
