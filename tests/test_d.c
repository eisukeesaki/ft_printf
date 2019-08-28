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
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< d
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
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -d
	nprinted_l = printf("arg:0|spec:-d@libc:%-d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:-d@mine:%-d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:-d@libc:%-d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:-d@mine:%-d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:-d@libc:%-d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:-d@mine:%-d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:-d@libc:%-d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:-d@mine:%-d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:-d@libc:%-d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:-d@mine:%-d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:-d@libc:%-d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:-d@mine:%-d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -+d
	nprinted_l = printf("arg:0|spec:-+d@libc:%-+d\n", 0);
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
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< +d
	nprinted_l = printf("arg:0|spec:+d@libc:%+d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:+d@mine:%+d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:+d@libc:%+d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:+d@mine:%+d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:+d@libc:%+d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:+d@mine:%+d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:+d@libc:%+d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:+d@mine:%+d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:+d@libc:%+d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:+d@mine:%+d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:+d@libc:%+d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:+d@mine:%+d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' 'd
	nprinted_l = printf("arg:0|spec: d@libc:% d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: d@mine:% d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: d@libc:% d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: d@mine:% d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: d@libc:% d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: d@mine:% d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: d@libc:% d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: d@mine:% d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: d@libc:% d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: d@mine:% d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: d@libc:% d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: d@mine:% d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' 'd

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '-d
	nprinted_l = printf("arg:0|spec: -d@libc:% -d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: -d@mine:% -d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: -d@libc:% -d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: -d@mine:% -d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: -d@libc:% -d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: -d@mine:% -d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: -d@libc:% -d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: -d@mine:% -d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: -d@libc:% -d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: -d@mine:% -d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: -d@libc:% -d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: -d@mine:% -d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '-d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '0d
	nprinted_l = printf("arg:0|spec: 0d@libc:% 0d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: 0d@mine:% 0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: 0d@libc:% 0d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: 0d@mine:% 0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: 0d@libc:% 0d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: 0d@mine:% 0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: 0d@libc:% 0d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: 0d@mine:% 0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: 0d@libc:% 0d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: 0d@mine:% 0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: 0d@libc:% 0d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: 0d@mine:% 0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '0d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0d
	nprinted_l = printf("arg:0|spec:0d@libc:%0d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:0d@mine:%0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:0d@libc:%0d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:0d@mine:%0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:0d@libc:%0d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:0d@mine:%0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:0d@libc:%0d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:0d@mine:%0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:0d@libc:%0d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:0d@mine:%0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:0d@libc:%0d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:0d@mine:%0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0+d
	nprinted_l = printf("arg:0|spec:0+d@libc:%0+d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:0+d@mine:%0+d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:0+d@libc:%0+d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:0+d@mine:%0+d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:0+d@libc:%0+d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:0+d@mine:%0+d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:0+d@libc:%0+d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:0+d@mine:%0+d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:0+d@libc:%0+d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:0+d@mine:%0+d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:0+d@libc:%0+d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:0+d@mine:%0+d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< (w)d
	nprinted_l = printf("arg:0|spec:5d@libc:%5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:5d@mine:%5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:9d@libc:%9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:9d@mine:%9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:9d@libc:%9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:9d@mine:%9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:13d@libc:%13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:13d@mine:%13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:13d@libc:%13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:13d@mine:%13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:13d@libc:%13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:13d@mine:%13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> (w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -(w)d
	nprinted_l = printf("arg:0|spec:-5d@libc:%-5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:-5d@mine:%-5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:-9d@libc:%-9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:-9d@mine:%-9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:-9d@libc:%-9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:-9d@mine:%-9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:-13d@libc:%-13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:-13d@mine:%-13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:-13d@libc:%-13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:-13d@mine:%-13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:-13d@libc:%-13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:-13d@mine:%-13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -+(w)d
	nprinted_l = printf("arg:0|spec:-+5d@libc:%-+5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:-+5d@mine:%-+5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:-+9d@libc:%-+9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:-+9d@mine:%-+9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:-+9d@libc:%-+9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:-+9d@mine:%-+9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:-+13d@libc:%-+13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:-+13d@mine:%-+13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:-+13d@libc:%-+13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:-+13d@mine:%-+13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:-+13d@libc:%-+13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:-+13d@mine:%-+13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -+(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< +(w)d
	nprinted_l = printf("arg:0|spec:+5d@libc:%+5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec:+5d@mine:%+5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:+9d@libc:%+9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:+9d@mine:%+9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:+9d@libc:%+9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:+9d@mine:%+9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:+13d@libc:%+13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:+13d@mine:%+13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:+13d@libc:%+13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:+13d@mine:%+13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:+13d@libc:%+13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:+13d@mine:%+13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '(w)d
	nprinted_l = printf("arg:0|spec: 5d@libc:% 5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: 5d@mine:% 5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: 9d@libc:% 9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: 9d@mine:% 9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: 9d@libc:% 9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: 9d@mine:% 9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: 13d@libc:% 13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: 13d@mine:% 13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: 13d@libc:% 13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: 13d@mine:% 13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: 13d@libc:% 13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: 13d@mine:% 13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '(w)d
	nprinted_l = printf("arg:0|spec: 5d@libc:% 5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: 5d@mine:% 5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: 9d@libc:% 9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: 9d@mine:% 9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: 9d@libc:% 9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: 9d@mine:% 9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: 13d@libc:% 13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: 13d@mine:% 13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: 13d@libc:% 13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: 13d@mine:% 13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: 13d@libc:% 13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: 13d@mine:% 13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '(w)d















	return (0);
}

