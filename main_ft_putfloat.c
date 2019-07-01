#include <stdio.h>
#include "libft/libft.h"

void	ft_putfloat(long double n, size_t prec);

int			main(void)
{
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< positive
	ft_putstr("mine:");
	long double	f = 789.123456;
	ft_putfloat(f, 6);
	ft_putstr("\n");

	long double	f2 = 789.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 0.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 0.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 0.012306;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 0.012306;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 1.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 1.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 1234567891.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 1234567891.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 1020304050.060708;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 1020304050.060708;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 9223372036854.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 9223372036854.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = 9223372036854775807.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 9223372036854775807.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> positive

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0
	f = 0;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = 0;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< negative
	ft_putstr("mine:");
	f = -789.123456;
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -789.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = -0.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -0.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = -0.012306;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -0.012306;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = -1.23456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -1.23456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = -1234567891.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -1234567891.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = -1020304050.060708;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -1020304050.060708;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");

	f = -9223372036854775807.123456;
	ft_putstr("mine:");
	ft_putfloat(f, 6);
	ft_putstr("\n");

	f2 = -9223372036854775807.123456;
	printf("libc:%Lf\n", f2);
	ft_putstr("\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> negative

	return (0);
}