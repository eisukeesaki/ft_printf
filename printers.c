/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 19:44:47 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/15 22:32:43 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

void	ft_putfloat(long double n, size_t prec);
void	ft_putoctal(unsigned long long d);
void	ft_putunbr(unsigned int n);
void	ft_puthex_upper(unsigned long long d);
void	ft_puthex_lower(unsigned long long d);
void	ft_putptr(void *p);

void	conversion_d(va_list ap, t_format *recipe)
{
	int			arg;

	arg = va_arg(ap, int);
	ft_putnbr(arg);
}

void	conversion_u(va_list ap, t_format *recipe)
{
	unsigned	arg;

	arg = va_arg(ap, unsigned int);
	ft_putunbr(arg);
}

void	conversion_c(va_list ap, t_format *recipe)
{
	char		arg;

	arg = va_arg(ap, int);
	write(1, &arg, 1);
}

void	conversion_s(va_list ap, t_format *recipe)
{
	char		*arg;

	arg = va_arg(ap, char *);
	ft_putstr(arg);
}

// void	conversion_f(va_list ap, size_t prec)
void	conversion_f(va_list ap, t_format *recipe)
{
	long double	arg;

	arg = va_arg(ap, long double);
	ft_putfloat(arg, 6);
	// ft_putfloat(arg, prec);
}

void	conversion_o(va_list ap, t_format *recipe)
{
	unsigned long long	arg;

	arg = va_arg(ap, unsigned long long);
	ft_putoctal(arg);
}

void	conversion_X(va_list ap, t_format *recipe)
{
	unsigned long long	arg;

	arg = va_arg(ap, unsigned long long);
	ft_puthex_upper(arg);
}

void	conversion_x(va_list ap, t_format *recipe)
{
	unsigned long long	arg;

	arg = va_arg(ap, unsigned long long);
	ft_puthex_lower(arg);
}

void	conversion_p(va_list ap, t_format *recipe)
{
	void	*arg;

	arg = va_arg(ap, void *);
	ft_putptr(arg);
}
