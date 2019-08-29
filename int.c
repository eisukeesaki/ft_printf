/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/29 00:05:05 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< debug purpose
#include <stdio.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> debug purpose

// char	*itoa_base(intmax_t n, uintmax_t base);

// void	right_justify(char *s, t_format *recipe, int sign)
void	right_justify(char *s, t_format *recipe, int sign)
{
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1); //TODO: FIX
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	if (sign == NEGATIVE)
		recipe->nprinted += write(1, "-", 1); //TODO: FIX
	else if (sign == POSITIVE)
		recipe->nprinted += write(1, "+", 1); //TODO: FIX
	recipe->nprinted += write(1, s, ft_strlen(s));
}

// void	left_justify(char *s, t_format *recipe, int sign)
void	left_justify(char *s, t_format *recipe, int sign)
{
	if (recipe->space)
		recipe->nprinted += write(1, " ", 1);
	if (sign == NEGATIVE)
		recipe->nprinted += write(1, "-", 1);
	else if (sign == POSITIVE)
		recipe->nprinted += write(1, "+", 1);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	while (recipe->width-- > 0)
		recipe->nprinted++;
	recipe->nprinted += write(1, s, ft_strlen(s));
}

// void	apply_sub_spec(intmax_t n, t_format *recipe, int sign)
void	apply_sub_spec(long long n, t_format *recipe, int sign)
{
	char	*s;
	size_t	intlen;
	
	intlen = count_int_digits(n);
	if (sign != 0) // is NEGATIVE or POSITIVE
		recipe->width = recipe->width - (intlen + recipe->precision + recipe->space + 1);
	else
		recipe->width = recipe->width - (intlen + recipe->precision + recipe->space);
	if (recipe->space && sign != 0)
		recipe->space = 0;
	s = itoa_base(n, 10);
	if (recipe->minus == 1)
		left_justify(s, recipe, sign);
		// left_justify(s, recipe, sign);
	else if (recipe->minus == 0)
		right_justify(s, recipe, sign);
		// right_justify(s, recipe, sign);
}

void	print_int(t_format *recipe, va_list ap)
{
	// intmax_t	n;
	long long	n;
	int			sign;

	n = 0;
	sign = 0;
	if (recipe->length == 0)
		n = (int)va_arg(ap, int);
	else if (recipe->length == HH)
		n = (unsigned char)va_arg(ap, int);
	else if (recipe->length == H)
		n = (short)va_arg(ap, int);
	else if (recipe->length == LL)
		n = (long long)va_arg(ap, long long);
	else if (recipe->length == L)
		n = (long)va_arg(ap, long);
	if (recipe->plus && n >= 0)
		sign = POSITIVE;
	else if (n < 0)
	{
		sign = NEGATIVE;
		n *= -1;
	}
	apply_sub_spec(n, recipe, sign);
}
