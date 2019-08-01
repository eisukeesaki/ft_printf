#include <stdio.h>
#include <limits.h>
#include "../../libft/libft.h"

void		ft_putoctal(unsigned long long d);

int		main(void)
{
	// int						n = 0;

	// short				n = SHRT_MIN;
	// short				n = SHRT_MAX;
	// unsigned short		n = USHRT_MAX;

	// int					n = INT_MIN;
	// int					n = INT_MAX;
	// unsigned			n = UINT_MAX;

	// long				n = LONG_MIN;
	// long				n = LONG_MAX;
	// unsigned long		n = ULONG_MAX;

	// long long			n = LLONG_MIN;
	// long long			n = LONG_MAX;
	unsigned long long	n = ULLONG_MAX;

	// while (n < 100)
	// {
		printf("libc:%llo\n", n);
		ft_putstr("mine:");
		ft_putoctal(n);
		ft_putstr("\n\n");
	// 	n++;
	// }

	return (0);
}
