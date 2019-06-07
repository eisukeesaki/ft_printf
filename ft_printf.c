#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

size_t	ft_count_substr(const char *s, unsigned int start, char end)
{
	size_t	len;

	if (!s || !end)
		return (0);

	len = 0;
	while (s[start + len] != end && s[start + len])
		len++;;
	return (len);
}

void	ft_print_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;

	if (!s || len < 1)
		return ;

	i = 0;
	while (i < len)
	{
		write(1, &s[start + i], 1);
		i++;;
	}
}

int		ft_printf(const char *s, ...)
{
	size_t	i;
	size_t	len;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i])
	{
		len = ft_count_substr(s, i, '%');
		ft_print_substr(s, i, len);
		i += len + 1;
	}
	va_end(ap);

	return (0);
}

int		main(void)
{
	// const char	s[] = "def";
	// int			n = 2147483647;

	// ft_printf("abc%sghi%djkl", s, n);
	ft_printf("moulinette%is%trash");

	return (0);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< back up
		// if (*(find_fmt_spec(s)) == 's')
		// {
		// 	char *arg = va_arg(ap, char *);
		// 	ft_putstr(arg);
		// 	write(1, "\n", 1);
		// }
		// else if (*(find_fmt_spec(s)) == 'd')
		// {
		// 	int arg = va_arg(ap, int);
		// 	ft_putnbr(arg);
		// 	write(1, "\n", 1);
		// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> back up