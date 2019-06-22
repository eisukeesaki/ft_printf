// #include <stdio.h>
// #include <math.h>

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

// int		main(void)
// {
// 	printf("ft_pow(9223372036854775807, 5):%f\n", ft_pow(9223372036854775807, 5));
// 	printf("   pow(9223372036854775807, 5):%f\n", pow(9223372036854775807, 5));

// 	return (0);
// }