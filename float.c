/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/30 04:28:27 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

void	convert(t_float *fl)
{
	fl->int_ld = (long long)fl->n;
	fl->int_s = itoa_base(fl->int_ld, 10);
	fl->n -= (long double)fl->int_ld;
	fl->n *= power(10, fl->precision);
	fl->frac_ld = (fl->n >= 0) ? (long)(fl->n + 0.5) : (long)(fl->n - 0.5);
	if (fl->frac_ld == power(10, fl->precision) && fl->frac_ld != 0)
	{
		fl->int_s = itoa_base(fl->int_ld + 1, 10);
		fl->frac_ld = 0;
	}
	fl->frac_s = itoa_base(fl->frac_ld, 10);
}

void	format(t_format *fmt, t_float *fl)
{
	if (fl->n < 0)
	{
		fl->sign = '-';
		fl->hassign = 1;
		fl->n = -fl->n;
	}
	else if (fl->n > 0 && fmt->plus)
	{
		fl->sign = '+';
		fl->hassign = 1;
	}
	fl->precision = 6;
	if (fmt->space && fl->hassign)
		fmt->space = 0;
	fl->pad_char = fmt->zero && !fmt->minus ? '0' : ' ';
	if (fmt->hasprecision && fmt->precision >= 0)
		fl->precision = fmt->precision;
}

void	bzero_fl(t_float *fl)
{
	fl->n = 0;
	fl->int_ld = 0;
	fl->int_s = 0;
	fl->intlen = 0;
	fl->frac_ld = 0;
	fl->frac_s = 0;
	fl->hassign = 0;
	fl->sign = 0;
	fl->precision = 0;
	fl->pad = 0;
	fl->pad_char = 0;
	fl->zeros = 0;
	fl->dot = 0;
}

t_float	*init_fl(void)
{
	t_float *fl;

	if (!(fl = (t_float *)malloc(sizeof(t_float))))
		return (0);
	bzero_fl(fl);
	return (fl);
}

void	print_float(t_format *fmt, va_list ap)
{
	t_float	*fl;

	fl = init_fl();
	if (fmt->length == UPPER_L)
		fl->n = va_arg(ap, long double);
	else
		fl->n = va_arg(ap, double);
	format(fmt, fl);
	convert(fl);
	format_2(fmt, fl);
	justify(fmt, fl);
	free(fl->int_s);
	free(fl->frac_s);
	free(fl);
}
