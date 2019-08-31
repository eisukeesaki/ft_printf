// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "../libft/libft.h"
#include "../ft_printf.h"

int		ft_printf(const char *format, ...);

int		main(void)
{
	int					nprinted_libc = 0;
	int					nprinted_mine = 0;

	// setbuf(stdout, NULL);

	// nprinted_libc = printf("arg:0, 123456|spec:*d@libc:%*d\n", 0, 123456);
	// nprinted_mine = ft_printf("arg:0, 123456|spec:*d@mine:%*d\n", 0, 123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:00d@libc:%009d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:00d@mine:%009d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	return (0);
}

