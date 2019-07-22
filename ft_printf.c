#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

void	ft_putfloat(long double n, size_t prec);

printer *g_jump_table[256] =
{
	['d'] = &dispatch_d,
	['c'] = &dispatch_c,
	['s'] = &dispatch_s,
	['f'] = &dispatch_f,
	['u'] = &dispatch_u,
};

int		ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	ap;

	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (g_jump_table[(unsigned char)s[i + 1]])
			{
				g_jump_table[(unsigned char)s[i + 1]](ap);
				i++;
			}
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(ap);

	return (0);
}

int		main(void)
{
	const char		s[] = "apple";
	int				d = -2147483648;
	char			c = 'A';
	unsigned int	u = 4294967295;
	long double		f = 1234567891.123456;

	ft_printf("string:%s\nint:%d\nchar:%c\nunsigned int:%u\nfloat:%f\n", s, d, c, u, f);

	return (0);
}
