#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "libft/libft.h"

int		main(void)
{
	intmax_t	n = INT_MIN;
	uintmax_t	base = 2;
	char		*a;

	while (base < 17)
	{
		// printf("n:%jd, base:%jd\n\t%s\n", n, base, itoa_base(n, base));
		a = itoa_base(n, base);
		printf("base%jd:\t%s\n", base, a);
		free(a);
		base++;
	}
	// printf("base  8:%jo\n", n);
	// printf("base 16:%jX\n", n);
	return (0);
}
