/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/30 04:31:54 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_pointer(char *s, int intlen, t_format *fmt)
{
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
	fmt->nprinted += write(1, "0x", 2);
	fmt->nprinted += write(1, s, intlen);
}

void	left_justify_pointer(char *s, int intlen, t_format *fmt)
{
	fmt->nprinted += write(1, "0x", 2);
	fmt->nprinted += write(1, s, intlen);
	while (fmt->width-- > 0)
		fmt->nprinted += write(1, " ", 1);
}

void	sub_specifiers_pointer(uintmax_t n, t_format *fmt)
{
	char	*s;
	int		intlen;

	s = itoa_base(n, 16);
	intlen = ft_strlen(s);
	fmt->width -= intlen + 2;
	if (!fmt->minus)
		right_justify_pointer(s, intlen, fmt);
	else if (fmt->minus)
		left_justify_pointer(s, intlen, fmt);
	free(s);
}

void	print_pointer(t_format *fmt, va_list ap)
{
	uintmax_t	p;

	p = va_arg(ap, unsigned long long);
	sub_specifiers_pointer(p, fmt);
}
