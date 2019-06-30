#include <stdio.h>

double	ft_pow(double base, double exponent)
{
	double	res;

	res = base;
	while (1 < exponent)
	{
		res *= base;
		exponent--;
	}
	return (res);
}

double	fmod10(double n)
{
	return (n / ft_pow(10, 2));
}

int		main(void)
{
	double	n = 123.456789;
	printf("%lf\n", fmod10(n));

	return (0);
}

// double	ft_fmod(double n, double div)
// {
// 	return (n - div * (long)(n / div)); // use of type casting becomes a bottleneck
// }