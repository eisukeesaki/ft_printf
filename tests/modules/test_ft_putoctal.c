#include <stdio.h>
#include "../../libft/libft.h"

void		ft_putoctal(int d);

int		main(void)
{
	// int	d_libc = 0;
	// int	d_mine = 0;
	int	d = 2147483647;

	// while (d < 128)
	// {
	// 	printf("libc:%o\n", d);
	// 	ft_putstr("mine:");
	// 	ft_putoctal(d);
	// 	printf("\n");
	// 	printf("\n");
	// 	d++;
	// }

	printf("libc:%o\n", d);
	ft_putstr("mine:");
	ft_putoctal(d);

	return (0);
}
