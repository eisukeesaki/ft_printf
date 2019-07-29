#include "libft/libft.h"
#include "printf.h"

void	ft_putfloat(long double n, size_t prec);

void	dispatch_d(va_list ap)
{
	int			arg;

	arg = va_arg(ap, int);
	ft_putnbr(arg);
}

void	dispatch_u(va_list ap)
{
	unsigned	arg;

	arg = va_arg(ap, unsigned int);
	ft_putnbr(arg);
}

void	dispatch_c(va_list ap)
{
	char		arg;

	arg = va_arg(ap, int);
	write(1, &arg, 1);
}

void	dispatch_s(va_list ap)
{
	char		*arg;

	arg = va_arg(ap, char *);
	ft_putstr(arg);
}

// void	dispatch_f(va_list ap, size_t prec)
void	dispatch_f(va_list ap)
{
	long double	arg;

	arg = va_arg(ap, long double);
	ft_putfloat(arg, 6);
	// ft_putfloat(arg, prec);
}
