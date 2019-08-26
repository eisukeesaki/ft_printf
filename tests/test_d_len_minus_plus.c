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

	// setbuf(stdout, NULL);
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< conversion / length / - / +
	nprinted_l = printf("arg:0|spec:-+d@libc:%- d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:-+d@mine:%-+d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:-+d@libc:%-+d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:-+d@mine:%-+d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:-+d@libc:%-+d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:-+d@mine:%-+d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(short)SHRT_MIN@|spec:-+hd@libc:%-+hd\n", (short)SHRT_MIN);
	nprinted_m = ft_printf("arg:(short)SHRT_MIN@|spec:-+hd@mine:%-+hd\n", (short)SHRT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(short)SHRT_MAX|spec:-+hd@libc:%-+hd\n", (short)SHRT_MAX);
	nprinted_m = ft_printf("arg:(short)SHRT_MAX|spec:-+hd@mine:%-+hd\n", (short)SHRT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(short)USHRT_MAX|spec:-+hd@libc:%-+hd\n", (short)USHRT_MAX);
	nprinted_m = ft_printf("arg:(short)USHRT_MAX|spec:-+hd@mine:%-+hd\n", (short)USHRT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:-+d@libc:%-+d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:-+d@mine:%-+d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:-+d@libc:%-+d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:-+d@mine:%-+d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:-+d@libc:%-+d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:-+d@mine:%-+d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LONG_MIN@|spec:-+ld@libc:%-+ld\n", LONG_MIN);
	nprinted_m = ft_printf("arg:LONG_MIN@|spec:-+ld@mine:%-+ld\n", LONG_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LONG_MAX@|spec:-+ld@libc:%-+ld\n", LONG_MAX);
	nprinted_m = ft_printf("arg:LONG_MAX@|spec:-+ld@mine:%-+ld\n", LONG_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:ULONG_MAX@|spec:-+ld@libc:%-+ld\n", ULONG_MAX);
	nprinted_m = ft_printf("arg:ULONG_MAX@|spec:-+ld@mine:%-+ld\n", ULONG_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LLONG_MAX@|spec:-+lld@libc:%-+lld\n", LLONG_MAX);
	nprinted_m = ft_printf("arg:LLONG_MAX@|spec:-+lld@mine:%-+lld\n", LLONG_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:LLONG_MIN@|spec:-+lld@libc:%-+lld\n", LLONG_MIN);
	nprinted_m = ft_printf("arg:LLONG_MIN@|spec:-+lld@mine:%-+lld\n", LLONG_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(char)CHAR_MIN|spec:-+hhd@libc:%-+hhd\n", (char)CHAR_MIN);
	nprinted_m = ft_printf("arg:(char)CHAR_MIN|spec:-+hhd@mine:%-+hhd\n", (char)CHAR_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:(char)CHAR_MAX|spec:-+hhd@libc:%-+hhd\n", (char)CHAR_MAX);
	nprinted_m = ft_printf("arg:(char)CHAR_MAX|spec:-+hhd@mine:%-+hhd\n", (char)CHAR_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> conversion / length / - / +

	return (0);
}

