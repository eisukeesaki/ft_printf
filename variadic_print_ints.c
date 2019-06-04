#include <stdio.h>
#include <stdarg.h>

int		print_ints(int	n_ct, ...)
{
	int		i = 0;
	int		sum = 0;
	va_list	ap;

	va_start(ap, n_ct);
	while (i < n_ct)
	{
		int arg = va_arg(ap, int);
		printf("int: %d\n", arg);
		i++;
	}
	va_end(ap);

	return (sum);
}

int		main(void)
{
	print_ints(3,1,4,5);
	return (0);
}