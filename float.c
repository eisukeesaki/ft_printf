/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   float.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/14 23:49:23 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	process_float(long double n, t_format *recipe)
{
	t_float	fl;

	fl.int_part_ll = (long long)n;
	fl.int_part_s = uitoa_base(fl.int_part_ll, 10);
	n = (n - fl.int_part_ll) * (power(10, recipe->precision));
	n >= 0 ? (n += (long double)0.5) : (n -= (long double)0.5);
	fl.frac_part_s = itoa_base(n, 10);
	recipe->nprinted += write(1, fl.int_part_s, ft_strlen(fl.int_part_s));
	recipe->nprinted += write(1, ".", 1);
	recipe->nprinted += write(1, fl.frac_part_s, ft_strlen(fl.frac_part_s));
}

void	print_float(t_format *recipe, va_list ap)
{
	long double	n;

	n = (long double)va_arg(ap, double);
	process_float(n, recipe);
}