#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

const char	*find_fmt_spec(const char *s)
{
	static size_t	i;

	i = 0;
	while (s[i] && s[i] != '%')
		i++;
	i++;
	return (&s[i]);
}

void	ft_printf(size_t ac, const char *s, ...)
{
	size_t	i = 0;
	va_list	ap;

	va_start(ap, s);

	if (i > ac)
		return ;

	find_fmt_spec(s);

		if (*(find_fmt_spec(s)) == 's')
		{
			char *arg = va_arg(ap, char *);
			ft_putstr(arg);
			write(1, "\n", 1);
		}
		else if (*(find_fmt_spec(s)) == 'd')
		{
			int arg = va_arg(ap, int);
			ft_putnbr(arg);
			write(1, "\n", 1);
		}
	i++;
	va_end(ap);
}

int		main(void)
{
	const char	s[] = "str1";
	int			n = 2147483647;

	ft_printf(2, "string passed as arg:%s", s, n);

	return (0);
}

// void	print_ints_strs(int ac, ...)
// {
// 	int		i = 0;
// 	va_list	ap;

// 	va_start(ap, ac);
// 	while (i < ac)
// 	{
// 		char *arg = va_arg(ap, char *);
// 		ft_putstr(arg);
// 		write(1, "\n", 1);
// 		i++;
// 	}
// 	va_end(ap);
// }

// int		main(void)
// {
// 	print_ints_strs(4, "str1", 1, "str2", 2);
// 	return (0);
// }