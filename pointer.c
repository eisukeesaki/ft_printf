/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 20:14:54 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/11 04:19:04 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	right_justify_pointer(char *s, int intlen, const char x, t_format *recipe)
{
	char	pad;

	pad = (recipe->zero && !recipe->hasprecision) ? '0' : ' ';
	if (pad == '0')
	{
		if (recipe->hash && !ft_strequ(s, "0") && x == 'x')
			recipe->nprinted += write(1, "0x", 2);
		else if (recipe->hash && !ft_strequ(s, "0") && x == 'X')
			recipe->nprinted += write(1, "0X", 2);
		while (recipe->width-- > 0)
			recipe->nprinted += write(1, &pad, 1);
	}
	else if (pad == ' ')
	{
		while (recipe->width-- > 0)
			recipe->nprinted += write(1, &pad, 1);
		if (recipe->hash && !ft_strequ(s, "0") && x == 'x')
			recipe->nprinted += write(1, "0x", 2);
		else if (recipe->hash && !ft_strequ(s, "0") && x == 'X')
			recipe->nprinted += write(1, "0X", 2);
	}
	while (recipe->precision-- > 0)
		recipe->nprinted += write(1, "0", 1);
	recipe->nprinted += write(1, s, intlen);
}

void	left_justify_pointer(char *s, int intlen, const char x, t_format *recipe)
{
	if (recipe->hash && !ft_strequ(s, "0") && x == 'x')
		recipe->nprinted += write(1, "0x", 2);
	else if (recipe->hash && !ft_strequ(s, "0") && x == 'X')
		recipe->nprinted += write(1, "0X", 2);
	while (recipe->precision > 0)
	{
		recipe->nprinted += write(1, "0", 1);
		recipe->precision--;
	}
	recipe->nprinted += write(1, s, intlen);
	while (recipe->width-- > 0)
		recipe->nprinted += write(1, " ", 1);
}

void	apply_sub_spec_pointer(const char x, uintmax_t n, t_format *recipe)
{
	char	*s;
	int		intlen;

	s = x == 'x' ? itoa_base(n, 16) : itoa_base_upper(n, 16);
	intlen = (recipe->hasprecision && recipe->precision <= 0 && n == 0) ? 0
																: ft_strlen(s);
	if (recipe->hasprecision && ft_strequ(s, "0") && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else if (recipe->hasprecision && recipe->precision > intlen)
		recipe->precision = recipe->precision - intlen;
	else
		recipe->precision = 0;
	if (ft_strequ(s, "0") && recipe->hash)
		recipe->width = recipe->width - (intlen + recipe->precision);
	else if (recipe->hash)
		recipe->width = recipe->width - (intlen + recipe->precision + 2);
	else
		recipe->width = recipe->width - (intlen + recipe->precision);
	if (recipe->minus == 1)
		left_justify_pointer(s, intlen, x, recipe);
	else if (recipe->minus == 0)
		right_justify_pointer(s, intlen, x, recipe);
}

void	print_pointer_tmpsuffix(const char x, t_format *recipe, va_list ap)
{
	uintmax_t	n;

	n = 0;
	if (recipe->length == 0)
		n = (unsigned)va_arg(ap, unsigned);
	else if (recipe->length == HH)
		n = (unsigned char)va_arg(ap, int);
	else if (recipe->length == H)
		n = (unsigned short)va_arg(ap, int);
	else if (recipe->length == LL)
		n = (unsigned long long)va_arg(ap, unsigned long long);
	else if (recipe->length == L)
		n = (unsigned long)va_arg(ap, unsigned long);
	apply_sub_spec_pointer(x, n, recipe);
}

void	print_pointer(t_format *recipe, va_list ap)
{
	// uintmax_t	p;

	// recipe->length = LL;
	// p = (unsigned long long)va_arg(ap, unsigned long long);
	// apply_sub_spec_pointer(p, recipe);
	// char	*s;
	// s = itoa_base((unsigned long long)va_arg(ap, void *), 16);
	// apply_sub_spec_pointer(s, recipe);

	recipe->length = LL;
	ft_putstr("0x");
	recipe->nprinted += 2;
	print_pointer_tmpsuffix((const char)'x', recipe, ap);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< removed unnecessary parts from hex
// void	right_justify_pointer(char *s, int intlen, t_format *recipe)
// {
// 	char	pad;

// 	pad = ' ';
// 	while (recipe->width-- > 0)
// 		recipe->nprinted += write(1, &pad, 1);
// 	if (!ft_strequ(s, "0"))
// 		recipe->nprinted += write(1, "0x", 2);
// 	while (recipe->precision-- > 0)
// 		recipe->nprinted += write(1, "0", 1);
// 	recipe->nprinted += write(1, s, intlen);
// }

// void	left_justify_pointer(char *s, int intlen, t_format *recipe)
// {
// 	if (!ft_strequ(s, "0"))
// 		recipe->nprinted += write(1, "0x", 2);
// 	while (recipe->precision > 0)
// 	{
// 		recipe->nprinted += write(1, "0", 1);
// 		recipe->precision--;
// 	}
// 	recipe->nprinted += write(1, s, intlen);
// 	while (recipe->width-- > 0)
// 		recipe->nprinted += write(1, " ", 1);
// }

// void	apply_sub_spec_pointer(uintmax_t n, t_format *recipe)
// {
// 	char	*s;
// 	int		intlen;

// 	s = itoa_base(n, 16);
// 	intlen = (recipe->hasprecision && recipe->precision <= 0 && n == 0) ? 0
// 																: ft_strlen(s);
// 	if (recipe->hasprecision && ft_strequ(s, "0") && recipe->precision > intlen)
// 		recipe->precision = recipe->precision - intlen;
// 	else if (recipe->hasprecision && recipe->precision > intlen)
// 		recipe->precision = recipe->precision - intlen;
// 	else
// 		recipe->precision = 0;
// 	if (ft_strequ(s, "0") && recipe->hash)
// 		recipe->width = recipe->width - (intlen + recipe->precision);
// 	else if (recipe->hash)
// 		recipe->width = recipe->width - (intlen + recipe->precision + 2);
// 	else
// 		recipe->width = recipe->width - (intlen + recipe->precision);
// 	if (recipe->minus == 1)
// 		left_justify_pointer(s, intlen, recipe);
// 	else if (recipe->minus == 0)
// 		right_justify_pointer(s, intlen, recipe);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> removed unnecessary parts from hex

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< copied from char
// void	print_pointer(t_format *recipe, va_list ap)
// {
// 	unsigned long long	*ptr;

// 	ptr = (unsigned long long)va_arg(ap, void *);
// 	if (recipe->width && recipe->minus == 0)
// 	{
// 		while (recipe->width-- > 1)
// 			recipe->nprinted += write(1, " ", 1);
// 		// recipe->nprinted = write(1, &ptr, 1);
// 		recipe->nprinted += ft_putpointer()
// 	}
// 	else if (recipe->width && recipe->minus == 1)
// 	{
// 		recipe->nprinted = write(1, &ptr, 1);
// 		while (recipe->width-- > 1)
// 			recipe->nprinted += write(1, " ", 1);
// 	}
// 	else
// 		recipe->nprinted = write(1, &ptr, 1);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> copied from char