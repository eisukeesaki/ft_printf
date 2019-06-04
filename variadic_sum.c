#include <stdio.h>
#include <stdarg.h>

int		sum(int	n_ct, ...)
{
	int		i = 0;
	int		sum = 0;
	va_list	ap;

	va_start(ap, n_ct); // initialize ap | n_ct (ap) is the last parameter of which the calling function knows the type. | address of n_ct is used
	while (i < n_ct)
	{
		// The first use of the va_arg() macro after that of the va_start() macro returns the argument after last. Successive invocations return the values of the remaining arguments.
		int n = va_arg(ap, int); // expands to an expression that has the type and value of the next argument in the call | Each call to va_arg() modifies ap so that the next call returns the next argument
		sum += n;
		i++;
	}
	va_end(ap); // signals that there are no further arguments, and causes ap to be invalidated

	return (sum);
}

int		main(void)
{
	printf("sum: %d\n", sum(3,1,4,5));
	return (0);
}

/* 
	If there is no next argument, or if type is not compatible with the type of the actual next argument
	(as promoted according to the default argument promotions), random errors will occur.

 */