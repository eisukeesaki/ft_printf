#include "libft/libft.h"

double	ft_pow(double base, double exponent);

size_t	ft_count_digit(long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	reverse_array(char *s, size_t len)
{
	size_t	head;
	size_t	tail;
	char	tmp;

	head = 0;
	tail = len - 1;
	while (head < tail)
	{
		tmp = s[head];
		s[head] = s[tail];
		s[tail] = tmp;
		head++;
		tail--;
	}
}

void	convert_to_str(long part, char *s)
{
	size_t	i;

	i = 0;
	while (part)
	{
		s[i++] = part % 10 + '0';
		part /= 10;
	}
	reverse_array(s, i);
	s[i] = '\0';
	return (i);
}

void	ft_putfloat(double n, size_t prec)
{
	long	int_part;
	double	frac_part;
	char	*s;
	size_t	i;

	int_part = (long)n;
	frac_part = n - (double)int_part;

	if (!(s = ft_strnew(ft_count_digit(int_part) + prec + 1)))
		return ;

	i = 0;
	convert_to_str(int_part, s, &i);

	if (prec != 0)
	{
		s[i] = '.';
		i++;
		frac_part = frac_part * ft_pow(10, prec);
		convert_to_str((long)frac_part, s, &i);
	}
	ft_putstr(s);
}