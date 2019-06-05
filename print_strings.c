#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

void	print_strings(int ac, ...)
{
	int		i = 0;
	va_list	ap;

	va_start(ap, ac);
	while (i < ac)
	{
		char *arg = va_arg(ap, char *);
		ft_putstr(arg);
		write(1, "\n", 1);
		i++;
	}
	va_end(ap);
}

int		main(void)
{
	print_strings(3, "str1", "str2", "str3");
	return (0);
}