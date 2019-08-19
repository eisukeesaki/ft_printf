/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/18 20:05:32 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

// void	right_justify(intmax_t n, t_format *recipe, int sign)
// {

// }

void	left_justify(char *s, t_format *recipe, int sign)
{
	recipe->nprinted = write(1, s, ft_strlen(s));
}

void	apply_sub_spec(intmax_t n, t_format *recipe, int sign)
{
	char	*s;
	
	if (sign)
		recipe->space = 0;
	s = ft_itoa(n);
	if (recipe->minus)
		left_justify(s, recipe, sign);
	else if (!recipe->minus)
		return ; // avoid compilation error
		// right_justify(s, recipe, sign);
}

void	print_int(const char *format, t_format *recipe, va_list ap)
{
	intmax_t	n;
	int			sign;

	n = 0;
	sign = 0;
	if (recipe->length == 0)
		n = (int)va_arg(ap, int);
	else if (recipe->length == HH)
		n = (unsigned char)va_arg(ap, unsigned char);
	else if (recipe->length == H)
		n = (short)va_arg(ap, int);
	else if (recipe->length == LL)
		n = (long long)va_arg(ap, long long);
	else if (recipe->length == L)
		n = (long)va_arg(ap, long);
	if (recipe->plus && format[recipe->i] >= 0)
		sign = POSITIVE;
	else if (format[recipe->i] < 0)
		sign = NEGATIVE;
	n *= -1;
	apply_sub_spec(n, recipe, sign);
}
