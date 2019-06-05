#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

void	print_ints(int	ac, ...)
{
	int		i = 0;
	va_list	ap;

	va_start(ap, ac);
	while (i < ac)
	{
		int arg = va_arg(ap, int);
		ft_putnbr(arg);
		write(1, "\n", 1);
		i++;
	}
	va_end(ap);
}

int		main(void)
{
	print_ints(3, 1, -2147483648, 2147483647);
	return (0);
}