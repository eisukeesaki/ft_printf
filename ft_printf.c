#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

void	ft_putunbr(unsigned int n);

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
			if (s[i + 1] == 'd' || s[i + 1] == 'i')
			{
				int arg = va_arg(ap, int);
				ft_putnbr(arg);
				i++;
			}
			else if (s[i + 1] == 's')
			{
				char *arg = va_arg(ap, char *);
				ft_putstr(arg);
				i++;
			}
			else if (s[i + 1] == 'c')
			{
				char arg = va_arg(ap, int);
				write(1, &arg, 1);
				i++;
			}
			else if (s[i + 1] == 'u')
			{
				char arg = va_arg(ap, unsigned int);
				ft_putunbr(arg);
				i++;
			}
			else if (s[i + 1] == 'f')
			{
				double arg = va_arg(ap, double);
				char *s = ft_ftoa(arg);
				ft_putstr(s);
				free(s);
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
	float			f = 123.4567;

	// ft_printf("This %s costs %d dollars%c uint:%u", s, n, c, un);
	ft_printf("string:%s\nint:%d\nchar:%c\nunsigned int:%u\nfloat:%f\n", s, d, c, u, f);

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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< back up
// size_t	ft_count_substr(const char *s, unsigned int start, char end)
// {
// 	size_t	len;

// 	if (!s || !end)
// 		return (0);

// 	len = 0;
// 	while (s[start + len] != end && s[start + len])
// 		len++;
// 	return (len);
// }

// void	ft_print_substr(const char *s, unsigned int start, size_t len)
// {
// 	size_t	i;

// 	if (!s || len < 1)
// 		return ;

// 	i = 0;
// 	while (i < len)
// 	{
// 		write(1, &s[start + i], 1);
// 		i++;;
// 	}
// }

// int		ft_printf(const char *s, ...)
// {
// 	size_t	i;
// 	size_t	len;
// 	va_list	ap;

// 	i = 0;
// 	len = 0;
// 	va_start(ap, s);
// 	while (s[i])
// 	{
// 		len = ft_count_substr(s, i, '%');
// 		ft_print_substr(s, i, len);
// 		i += len + 1;
// 	}
// 	va_end(ap);

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> backup