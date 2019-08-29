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
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< d\n");

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
	printf("nprinted@mine:%d\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -d\n");

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
	printf("nprinted@mine:%d\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -+d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -+d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -+d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< +d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< +d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' 'd
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' 'd\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' 'd\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' 'd

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '-d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '-d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '-d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '-d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '0d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '0d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '0d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '0d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0+d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0+d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0+d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< (w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< (w)d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> (w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> (w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -(w)d\n");

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
	printf("nprinted@mine:%d\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -+(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< -+(w)d\n");

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
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -+(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> -+(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< +(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< +(w)d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> +(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '(w)d\n");

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

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '-(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '-(w)d\n");

	nprinted_l = printf("arg:0|spec: -5d@libc:% -5d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: -5d@mine:% -5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: -9d@libc:% -9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: -9d@mine:% -9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: -9d@libc:% -9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: -9d@mine:% -9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: -13d@libc:% -13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: -13d@mine:% -13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: -13d@libc:% -13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: -13d@mine:% -13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: -13d@libc:% -13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: -13d@mine:% -13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '-(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '-(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '0(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< ' '0(w)d\n");

	nprinted_l = printf("arg:0|spec: 05d@libc:% 05d\n", 0);
	nprinted_m = ft_printf("arg:0|spec: 05d@mine:% 05d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec: 09d@libc:% 09d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec: 09d@mine:% 09d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec: 09d@libc:% 09d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec: 09d@mine:% 09d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec: 013d@libc:% 013d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec: 013d@mine:% 013d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec: 013d@libc:% 013d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec: 013d@mine:% 013d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec: 013d@libc:% 013d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec: 013d@mine:% 013d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '0(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ' '0(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0(w)d\n");

	nprinted_l = printf("arg:0|spec:05d@libc:%05d\n",0);
	nprinted_m = ft_printf("arg:0|spec:05d@mine:%05d\n",0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:09d@libc:%09d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:09d@mine:%09d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:09d@libc:%09d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:09d@mine:%09d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:013d@libc:%013d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:013d@mine:%013d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:013d@libc:%013d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:013d@mine:%013d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:013d@libc:%013d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:013d@mine:%013d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0+(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 0+(w)d\n");

	nprinted_l = printf("arg:0|spec:0+5d@libc:%0+5d\n",0);
	nprinted_m = ft_printf("arg:0|spec:0+5d@mine:%0+5d\n",0);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:123456|spec:0+9d@libc:%0+9d\n", 123456);
	nprinted_m = ft_printf("arg:123456|spec:0+9d@mine:%0+9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:-123456|spec:0+9d@libc:%0+9d\n", -123456);
	nprinted_m = ft_printf("arg:-123456|spec:0+9d@mine:%0+9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MIN@|spec:0+13d@libc:%0+13d\n", INT_MIN);
	nprinted_m = ft_printf("arg:INT_MIN@|spec:0+13d@mine:%0+13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:INT_MAX|spec:0+13d@libc:%0+13d\n", INT_MAX);
	nprinted_m = ft_printf("arg:INT_MAX|spec:0+13d@mine:%0+13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	nprinted_l = printf("arg:UINT_MAX|spec:0+13d@libc:%0+13d\n", UINT_MAX);
	nprinted_m = ft_printf("arg:UINT_MAX|spec:0+13d@mine:%0+13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_l);
	printf("nprinted@mine:%d\n\n", nprinted_m);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0+(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> 0+(w)d

	return (0);
}

