// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "../libft/libft.h"
#include "../ft_printf.h"

int		ft_printf(const char *format, ...);

int		main(void)
{
	int					nprinted_l = 0;
	int					nprinted_m = 0;

	// setbuf(stdout, NULL);

	nprinted_l = printf("arg:-123456|spec: 9d@libc:% 9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: 9d@mine:% 9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	return (0);
}

