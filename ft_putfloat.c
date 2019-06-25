#include <stdio.h>
#include "libft/libft.h"

long double	ft_fmod(long double n, long double div)
{
	return (n - div * (long)(n / div)); // use of type casting becomes a bottleneck
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

char	*assign_int_part(long double n, char *s, size_t len, int neg)
{
	size_t	i;

	if ((i = neg))
		s[i] = '-';
	while (i < len)
	{
		if (s[i] == '.')
			i++;
		else
		{
			s[i] = ((int)ft_fmod(n, 10)) + '0';
			n /= 10;
			i++;
		}
	}
	s = reverse_str(s, len);
	s[i] = '.';
	return (s);
}

char	*assign_dp(size_t slen, size_t prec, char *s, int neg)
{
	s[(slen - 1) - prec + neg] = '.';
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

int		check_neg(long double n)
{
	return (n < 0 ? 1 : 0);
}

void	ft_putfloat(long double n, size_t prec)
{
	char	*int_part;
	// char	*frac_part;
	size_t	len;
	int		neg;

	neg = check_neg(n);
	len = ct_int_part(n);
	int_part = ft_strnew(neg + len + 1);
	int_part = assign_int_part(n, int_part, len, neg);
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< debug
	printf("<dbg%lu>\n", prec);
	ft_putstr(int_part);
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> debug
}

int		main(void)
{
	// long double	n = 123.456789;
	long double	n = 1234567890123456789.123456;

	ft_putfloat(n, 6);

	return (0);
}