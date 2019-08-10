// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "libft/libft.h"
#include "ft_printf.h"

printer *g_jump_table[256] =
{
	['d'] = &dispatch_d,
	['i'] = &dispatch_d,
	['c'] = &dispatch_c,
	['s'] = &dispatch_s,
	['f'] = &dispatch_f,
	['u'] = &dispatch_u,
	['o'] = &dispatch_o,
	['X'] = &dispatch_X,
	['x'] = &dispatch_x,
	['p'] = &dispatch_p,
};

int		ft_printf(const char *s, ...)
{
	size_t	i;
	va_list	ap;

	i = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (g_jump_table[(unsigned char)s[i + 1]])
			{
				g_jump_table[(unsigned char)s[i + 1]](ap);
				i++;
			}
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(ap);

	return (0);
}

int		main(void)
{
	const char		s[] = "foo bar hoge";
	int				d = INT_MIN;
	char			c = 'A';
	unsigned int	u = UINT_MAX;
	long double		f = 1234567891.123456;
	unsigned 		o = 123456;
	unsigned		X = 123456;
	unsigned		x = 123456;
	int				*p = &d;

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %s
	ft_putstr("<%s>\n");
	printf("libc:%s\n", s);
	ft_putstr("mine:");
	ft_printf("%s", s);
	ft_putstr("\n</%s>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %s

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %d
	ft_putstr("<%d>\n");
	printf("libc:%d\n", d);
	ft_putstr("mine:");
	ft_printf("%d", d);
	ft_putstr("\n</%d>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %d

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %c
	ft_putstr("<%c>\n");
	printf("libc:%c\n", c);
	ft_putstr("mine:");
	ft_printf("%c", c);
	ft_putstr("\n</%c>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %c

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %u
	ft_putstr("<%u>\n");
	printf("libc:%u\n", u);
	ft_putstr("mine:");
	ft_printf("%u", u);
	ft_putstr("\n</%u>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %u

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %f
	ft_putstr("<%f>\n");
	printf("libc:%Lf\n", f);
	ft_putstr("mine:");
	ft_printf("%f", f);
	ft_putstr("\n</%f>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %f

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %o
	ft_putstr("<%o>\n");
	printf("libc:%o\n", o);
	ft_putstr("mine:");
	ft_printf("%o", o);
	ft_putstr("\n</%o>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %o

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %X
	ft_putstr("<%X>\n");
	printf("libc:%X\n", X);
	ft_putstr("mine:");
	ft_printf("%X", X);
	ft_putstr("\n</%X>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %X

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %x
	ft_putstr("<%x>\n");
	printf("libc:%x\n", x);
	ft_putstr("mine:");
	ft_printf("%x", x);
	ft_putstr("\n</%x>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %x

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %p
	ft_putstr("<%p>\n");
	printf("libc:%p\n", p);
	ft_putstr("mine:");
	ft_printf("%p", p);
	ft_putstr("\n</%p>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %p

	return (0);
}
