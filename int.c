/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:32 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/25 18:31:49 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

char	*itoa_base(intmax_t n, uintmax_t base);

// void	right_justify(char *s, t_format *recipe, int sign)
void	right_justify(char *s, t_format *recipe, int sign)
{
	if (recipe->space)
		recipe->nprinted = write(1, s, 1);
	if (sign == POSITIVE)
		recipe->nprinted = write(1, "+", 1);
	else if (sign == NEGATIVE)
		recipe->nprinted = write(1, "-", 1);
	recipe->nprinted += write(1, s, ft_strlen(s));
}

// void	left_justify(char *s, t_format *recipe, int sign)
void	left_justify(char *s, t_format *recipe)
{
	recipe->nprinted = write(1, s, ft_strlen(s));
}

// void	apply_sub_spec(intmax_t n, t_format *recipe, int sign)
void	apply_sub_spec(long long n, t_format *recipe, int sign)
{
	char	*s;
	
	if (recipe->space && sign != 0)
		recipe->space = 0;
	s = itoa_base(n, 10);
	if (recipe->minus == 1)
		left_justify(s, recipe);
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
