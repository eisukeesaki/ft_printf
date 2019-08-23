#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "libft/libft.h"

char	*itoa_base(intmax_t n, uintmax_t base);

int		main(void)
{
	intmax_t	n = ULLONG_MAX;
	uintmax_t	base = 10;
	char		*a = NULL;

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< print all base
	// while (base < 17)
	// {
	// 	// printf("n:%jd, base:%jd\n\t%s\n", n, base, itoa_base(n, base));
	// 	a = itoa_base(n, base);
	// 	printf("base%jd:\t%s\n", base, a);
	// 	free(a);
	// 	base++;
	// }
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> print all base

	a = itoa_base(n, base);
	printf("mine:%s\n", a);
	printf("libc:%ld\n", n);
	// printf("base  8:%jo\n", n);
	// printf("base 16:%jX\n", n);
	return (0);
}
