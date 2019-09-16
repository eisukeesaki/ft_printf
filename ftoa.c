/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:21:04 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/15 23:48:40 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

long double	my_fmod(double n, double div)
{
	return (n - div * (long long)(n / div));
}

long long	my_pow(int base, int exponent)
{
	long long	res;

	res = base;
	while (1 < exponent)
	{
		res *= base;
		exponent--;
	}
	return (res);
}

void		assign_int_part(t_float *fl)
{
	long double	n;
	size_t		i;

	n = fl->f;
	if (fl->len == 0)
	{
		fl->int_part = ft_strnew(2);
		fl->int_part[0] = '0';
		fl->int_part[1] = '.';
		return ;
	}
	fl->int_part = ft_strnew(fl->neg + fl->len + 1);
	i = 0;
	if (fl->neg)
		fl->int_part[i++] = '-';
	while (i < fl->len + fl->neg)
	{
		fl->int_part[i] = ((long long)my_fmod(n, 10)) + '0';
		n /= 10;
		i++;
	}
	fl->int_part = ft_strnrev(fl->int_part, 0 + fl->neg);
	fl->int_part[i] = '.';
}

void		assign_frac_part(t_float *fl)
{
	long double	nb;
	int			i;

	fl->frac_part = ft_strnew(fl->precision);
	nb = (fl->f - (long long)fl->f) * my_pow(10, fl->precision);
	if (nb >= 0)
		nb += (long double)0.5;
	else
		nb -= (long double)0.5;
	i = 0;
	while (i < fl->precision)
	{
		fl->frac_part[i] = ((long long)my_fmod(nb, 10)) + '0';
		nb /= 10;
		i++;
	}
	fl->frac_part = ft_strrev(fl->frac_part);
}

void		ct_int_part(t_float *fl)
{
	long double	n;

	n = fl->f;
	while (n > 1)
	{
		n /= 10;
		fl->len++;
	}
}

void		check_neg(t_float *fl)
{
	if (fl->f < 0)
	{
		fl->neg = 1;
		fl->f = -fl->f;
	}
	else
		fl->neg = 0;
}

char		*ftoa(long double n, int prec)
{
	t_float		*fl;

	if (!(fl = (t_float *)malloc(sizeof(t_float))))
		return (0);
	// bzero_fl(fl);
	fl->f = n;
	fl->precision = prec;
	check_neg(fl);
	ct_int_part(fl);
	assign_int_part(fl);
	assign_frac_part(fl);
	fl->a = ft_strjoin(fl->int_part, fl->frac_part);
	free(fl->int_part);
	free(fl->frac_part);
	return (fl->a);
}
