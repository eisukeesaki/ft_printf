// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "../libft/libft.h"
#include "../ft_printf.h"

int		ft_printf(const char *format, ...);

int		main(void)
{
	int					nprinted_l = 0;
	int					nprinted_m = 0;
	// const char		s[] = "foo bar hoge";
	// int					d = INT_MAX;
// 	char			c = 'A';
// 	unsigned int	u = UINT_MAX;
// 	long double		f = 1234567891.123456;
// 	unsigned 		o = 123456;
// 	unsigned		X = 123456;
// 	unsigned		x = 123456;
// 	int				*p = &d;

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %s
	// ft_putstr("<%s>\n");
	// printf("libc:%s\n", s);
	// ft_putstr("mine:");
	// ft_printf("%s", s);
	// ft_putstr("\n</%s>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %s

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %d
	// setbuf(stdout, NULL);
	nprinted_l = printf("arg:0|spec:d@libc:%d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:d@mine:%d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:d@libc:%d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:d@mine:%d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:d@libc:%d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:d@mine:%d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(short)SHRT_MIN@|spec:hd@libc:%hd\n", (short)SHRT_MIN);
	nprinted_m = ft_printf("arg:(short)SHRT_MIN@|spec:hd@mine:%hd\n", (short)SHRT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(short)SHRT_MAX|spec:hd@libc:%hd\n", (short)SHRT_MAX);
	nprinted_m = ft_printf("arg:(short)SHRT_MAX|spec:hd@mine:%hd\n", (short)SHRT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(short)USHRT_MAX|spec:hd@libc:%hd\n", (short)USHRT_MAX);
	nprinted_m = ft_printf("arg:(short)USHRT_MAX|spec:hd@mine:%hd\n", (short)USHRT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:d@libc:%d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:d@mine:%d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:d@libc:%d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:d@mine:%d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:d@libc:%d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:d@mine:%d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LONG_MIN@|spec:ld@libc:%ld\n", LONG_MIN);
	nprinted_m = ft_printf("arg:LONG_MIN@|spec:ld@mine:%ld\n", LONG_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LONG_MAX@|spec:ld@libc:%ld\n", LONG_MAX);
	nprinted_m = ft_printf("arg:LONG_MAX@|spec:ld@mine:%ld\n", LONG_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:ULONG_MAX@|spec:ld@libc:%ld\n", ULONG_MAX);
	nprinted_m = ft_printf("arg:ULONG_MAX@|spec:ld@mine:%ld\n", ULONG_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LLONG_MAX@|spec:lld@libc:%lld\n", LLONG_MAX);
	nprinted_m = ft_printf("arg:LLONG_MAX@|spec:lld@mine:%lld\n", LLONG_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LLONG_MIN@|spec:lld@libc:%lld\n", LLONG_MIN);
	nprinted_m = ft_printf("arg:LLONG_MIN@|spec:lld@mine:%lld\n", LLONG_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(char)CHAR_MIN|spec:hhd@libc:%hhd\n", (char)CHAR_MIN);
	nprinted_m = ft_printf("arg:(char)CHAR_MIN|spec:hhd@mine:%hhd\n", (char)CHAR_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(char)CHAR_MAX|spec:hhd@libc:%hhd\n", (char)CHAR_MAX);
	nprinted_m = ft_printf("arg:(char)CHAR_MAX|spec:hhd@mine:%hhd\n", (char)CHAR_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);



	// ft_putstr("\n</%d>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %d

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %c
// 	ft_putstr("<%c>\n");
// 	printf("libc:%c\n", c);
// 	ft_putstr("mine:");
// 	ft_printf("%c", c);
// 	ft_putstr("\n</%c>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %c

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %u
// 	ft_putstr("<%u>\n");
// 	printf("libc:%u\n", u);
// 	ft_putstr("mine:");
// 	ft_printf("%u", u);
// 	ft_putstr("\n</%u>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %u

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %f
// 	ft_putstr("<%f>\n");
// 	printf("libc:%Lf\n", f);
// 	ft_putstr("mine:");
// 	ft_printf("%f", f);
// 	ft_putstr("\n</%f>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %f

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %o
// 	ft_putstr("<%o>\n");
// 	printf("libc:%o\n", o);
// 	ft_putstr("mine:");
// 	ft_printf("%o", o);
// 	ft_putstr("\n</%o>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %o
// 
// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %X
// 	ft_putstr("<%X>\n");
// 	printf("libc:%X\n", X);
// 	ft_putstr("mine:");
// 	ft_printf("%X", X);
// 	ft_putstr("\n</%X>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %X

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %x
// 	ft_putstr("<%x>\n");
// 	printf("libc:%x\n", x);
// 	ft_putstr("mine:");
// 	ft_printf("%x", x);
// 	ft_putstr("\n</%x>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %x

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %p
// 	ft_putstr("<%p>\n");
// 	printf("libc:%p\n", p);
// 	ft_putstr("mine:");
// 	ft_printf("%p", p);
// 	ft_putstr("\n</%p>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %p

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%
// 	ft_putstr("<%%>\n");
// 	printf("libc:%%\n");
// 	ft_putstr("mine:");
// 	ft_printf("%%");
// 	ft_putstr("\n</%%>\n\n");
// // >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%

// // <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< combined
// 	ft_putstr("<combined (libc)>\n");
// 	printf("libc:int => %d\nampersand => %%\nhex(lower) => %x", d, x);
// 	setbuf(stdout, NULL);
// 	ft_putstr("\n</combined (libc)>\n\n");
// 	ft_putstr("<combined (min)>\n");
// 	ft_printf("mine:int => %d\nampersand => %%\nhex(lo) => %x", d, x);
// 	ft_putstr("\n</combined (min)>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> combined

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< hh
	// ft_printf("hhd:%hhd\n", 5);
	// printf("hhd:%hhd\n", 5);
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> hh

	return (0);
}

