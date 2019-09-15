// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "../../ft_printf/libft/libft.h"
#include "../../ft_printf/ft_printf.h"

int		ft_printf(const char *format, ...);

int		main(void)
{
	int					nprinted_libc = 0;
	int					nprinted_mine = 0;

	// setbuf(stdout, NULL);

	nprinted_libc = printf("%.12f", 9223372036854775808.0);
	setbuf(stdout, NULL);
	putchar('\n');

	nprinted_mine = ft_printf("%.12f", 9223372036854775808.0);
	setbuf(stdout, NULL);
	putchar('\n');

	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	return (0);
}

