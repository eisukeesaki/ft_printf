/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 23:21:04 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/17 00:52:52 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

// state: switching(not fully functional) '.' assignation from int_part to frac_part

long double	my_fmod(double n, double div)
{
	return (n - div * (long long)(n / div));
}

void		assign_int_part(t_float *fl)
{
	long double	n;
	size_t		i;

	n = fl->f + fl->round;
	i = 0;
	if (fl->len == 0)
	{
		fl->int_part = ft_strnew(3 + fl->neg);
		if (fl->neg)
			fl->int_part[i++] = '-';
		fl->int_part[i++] = '0';
		fl->int_part[i++] = '.';
		fl->int_part[i] = '\0';
		return ;
	}
	fl->int_part = ft_strnew(fl->neg + fl->len + 1);
	if (fl->neg)
		fl->int_part[i++] = '-';
	while (i < fl->len + fl->neg)
	{
		fl->int_part[i] = ((long long)my_fmod(n, 10)) + '0';
		n /= 10;
		i++;
	}
	fl->int_part = ft_strnrev(fl->int_part, 0 + fl->neg);
	fl->int_part[i] = '\0';
	// fl->int_part[i] = '.';
	// fl->int_part[++i] = '\0';
}

void		assign_frac_part(t_float *fl)
{
	long double	nb;
	int			i;

	fl->frac_part = ft_strnew(fl->precision + 1 + 1);
	nb = (fl->f - (long long)fl->f) * power(10, fl->precision);
	if (nb >= 0)
		nb += (long double)0.5;
	else
		nb -= (long double)0.5;
	if ((long long)nb == power(10, fl->precision))
		fl->round = 1;
	if (fl->precision == 0)
	{
		fl->frac_part = ft_strdup("\0");
		return ;
	}
	i = 0;
	while (i < fl->precision)
	{
		fl->frac_part[i] = ((long long)my_fmod(nb, 10)) + '0';
		nb /= 10;
		i++;
	}
	fl->frac_part[i] = '\0';
	fl->frac_part = ft_strrev(fl->frac_part);
	fl->frac_part[i++] = '.'; // TODO: assign '.' to correct position
}

void		ct_int_part(t_float *fl)
{
	long double	n;

	n = fl->f;
	while (n >= 1)
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

void		bzero_fl(t_float *fl)
{
	fl->f = 0;
	fl->precision = 0;
	fl->neg = 0;
	fl->len = 0;
	fl->round = 0;
	fl->int_part = 0;
	fl->frac_part = 0;
	fl->a = 0;
}

char		*ftoa(long double n, int prec)
{
	t_float		*fl;

	if (!(fl = (t_float *)malloc(sizeof(t_float))))
		return (0);
	bzero_fl(fl);
	fl->f = n;
	fl->precision = prec;
	check_neg(fl);
	ct_int_part(fl);
	assign_frac_part(fl);
	assign_int_part(fl);
	fl->a = ft_strjoin(fl->int_part, fl->frac_part);
	free(fl->int_part);
	free(fl->frac_part);
	return (fl->a);
}
