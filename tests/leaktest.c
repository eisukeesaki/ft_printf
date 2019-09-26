// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "../../ft_printf/libft/libft.h"
#include "../../ft_printf/ft_printf.h"

int		ft_printf(const char *format, ...);

int		main(void)
{
	int					nprinted_mine = 0;

	// nprinted_mine = ft_printf("%-5c", 'A');
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("% -24.12ld", LONG_MAX);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("% -24.12li", LONG_MIN);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("%#024.12o", INT_MAX);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("%#024.12x", INT_MAX);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("%#024.12X", INT_MIN);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("% -24.12u", UINT_MAX);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("%-20.30s", "some string");
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("%-20p", &nprinted_mine);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	// nprinted_mine = ft_printf("% -20.30f", -123.456798);
	// setbuf(stdout, NULL);
	// putchar('\n');
	// printf("nprinted@mine:%d\n", nprinted_mine);

	nprinted_mine = ft_printf("%%");
	setbuf(stdout, NULL);
	putchar('\n');
	printf("nprinted@mine:%d\n", nprinted_mine);

	// while (1);


	return (0);
}

