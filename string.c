/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/06 23:07:34 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	left_justify_string(t_format *recipe, char *s, int slen)
{
	if (recipe->hasprecision && slen > recipe->precision)
		slen = recipe->precision;
	recipe->nprinted += write(1, s, slen);
	if (recipe->width > slen)
	{
		while ((recipe->width--) - (slen) > 0)
			recipe->nprinted += write(1, " ", 1);
	}
}

void	right_justify_string(t_format *recipe, char *s, int slen)
{
	if (recipe->hasprecision && slen > recipe->precision)
		slen = recipe->precision;
	if (recipe->width > slen)
	{
		while ((recipe->width--) - (slen) > 0)
			recipe->nprinted += write(1, " ", 1);
	}
	recipe->nprinted += write(1, s, slen);
}

void	print_string(t_format *recipe, va_list ap)
{
	char	*s;
	int		slen;

	s = (char *)va_arg(ap, char *);
	slen = (int)ft_strlen(s);
	if (recipe->minus != 0)
		left_justify_string(recipe, s, slen);
	else if (recipe->minus == 0)
		right_justify_string(recipe, s, slen);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< backup
// void	print_string(t_format *recipe, va_list ap)
// {
// 	char	*s;
// 	int		nwrite;

// 	s = (char *)va_arg(ap, char *);
// 	if (recipe->precision == 0)
// 	{
// 		recipe->width -= ft_strlen(s);
// 		nwrite = ft_strlen(s);
// 	}
// 	else
// 	{
// 		// recipe->width = recipe->precision + (recipe->width - ft_strlen(s));
// 		nwrite = ft_strlen(s) - recipe->precision;
// 	}
// 	if (recipe->precision > 0)
// 	{
// 		recipe->width -= recipe->precision;
// 		nwrite = recipe->precision;
// 	}
// 	if (recipe->width && recipe->minus == 0)
// 	{
// 		while (recipe->width-- > 0)
// 			recipe->nprinted += write(1, " ", recipe->width);
// 		recipe->nprinted += write(1, s, nwrite);
// 	}
// 	else if (recipe->width && recipe->minus == 1)
// 	{
// 		recipe->nprinted += write(1, s, nwrite);
// 		while (recipe->width-- > 0)
// 			recipe->nprinted += write(1, " ", recipe->width);
// 	}
// 	else
// 		recipe->nprinted += write(1, s, nwrite);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> backup