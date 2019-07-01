#include "libft/libft.h"

int	ft_pow(int base, int exponent)
{
	int		res;

	res = base;
	while (1 < exponent)
	{
		res *= base;
		exponent--;
	}
	return (res);
}

long double	ft_fmod(long double n, long double div)
{
	return (n - div * (long)(n / div));
}

char	*reverse_str(char *s, size_t len)
{
	size_t	i;
	size_t	k;
	char	tmp;

	i = 0;
	k = len - 1;
	while (i < k)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k] = tmp;
		i++;
		k--;
	}
	return (s);
}

char	*assign_int_part(long double n, size_t len)
{
	char	*s;
	size_t	i;

	if (len == 0)
	{
		s = ft_strnew(2);
		s[0] = '0';
		s[1] = '.';
		return (s);
	}
	s = ft_strnew(len + 1);
	i = 0;
	while (i < len)
	{
		s[i] = ((int)ft_fmod(n, 10)) + '0';
		n /= 10;
		i++;
	}
	s = reverse_str(s, len);
	s[i] = '.';
	return (s);
}

char	*assign_frac_part(long double n, size_t prec)
{
	char	*s;
	long double	nb;
	size_t	i;

	s = ft_strnew(prec);
	nb = (n - (long)n) * ft_pow(10, prec);
	i = 0;
	while (i < prec)
	{
		s[i] = ((int)ft_fmod(nb, 10)) + '0';
		nb /= 10;
		i++;
	}
	s = reverse_str(s, prec);
	return (s);
}

size_t	ct_int_part(long double n)
{
	size_t	len;

	len = 0;
	while (n > 1)
	{
		n /= 10;
		len++;
	}
	return (len);
}

long double	check_neg(long double n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		return (-n);
	}
	return (n);
}

void	ft_putfloat(long double n, size_t prec)
{
	char	*int_part;
	char	*frac_part;
	size_t	len;
	long double	nb;

	nb = check_neg(n);
	len = ct_int_part(nb);
	int_part = assign_int_part(nb, len);
	frac_part = assign_frac_part(nb, prec);
	ft_putstr(int_part);
	ft_putstr(frac_part);
}
