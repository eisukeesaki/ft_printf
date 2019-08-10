/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 19:44:47 by eesaki            #+#    #+#             */
/*   Updated: 2019/08/09 17:45:29 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "printf.h"

void	ft_putfloat(long double n, size_t prec);
void	ft_putoctal(unsigned long long d);
void	ft_putunbr(unsigned int n);
void	ft_puthex_upper(unsigned long long d);
void	ft_puthex_lower(unsigned long long d);
void	ft_putptr(void *p);

void	dispatch_d(va_list ap)
{
	int			arg;

	arg = va_arg(ap, int);
	ft_putnbr(arg);
}

void	dispatch_u(va_list ap)
{
	unsigned	arg;

	arg = va_arg(ap, unsigned int);
	ft_putunbr(arg);
}

void	dispatch_c(va_list ap)
{
	char		arg;

	arg = va_arg(ap, int);
	write(1, &arg, 1);
}

void	dispatch_s(va_list ap)
{
	char		*arg;

	arg = va_arg(ap, char *);
	ft_putstr(arg);
}

// void	dispatch_f(va_list ap, size_t prec)
void	dispatch_f(va_list ap)
{
	long double	arg;

	arg = va_arg(ap, long double);
	ft_putfloat(arg, 6);
	// ft_putfloat(arg, prec);
}

void	dispatch_o(va_list ap)
{
	unsigned long long	arg;

	arg = va_arg(ap, unsigned long long);
	ft_putoctal(arg);
}

void	dispatch_X(va_list ap)
{
	unsigned long long	arg;

	arg = va_arg(ap, unsigned long long);
	ft_puthex_upper(arg);
}

void	dispatch_x(va_list ap)
{
	unsigned long long	arg;

	arg = va_arg(ap, unsigned long long);
	ft_puthex_lower(arg);
}

void	dispatch_p(va_list ap)
{
	void	*arg;

	arg = va_arg(ap, void *);
	ft_putptr(arg);
}
