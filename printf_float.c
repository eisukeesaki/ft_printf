#include <stdio.h>
#include <unistd.h>
#include "libft/libft.h"

int		main(void)
{
	float	f = 5.1;

	printf("libc:%f\n", f);

	ft_putstr(ft_itoa(f));

	return (0);
}