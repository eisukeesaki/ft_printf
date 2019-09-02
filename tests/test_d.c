// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "../libft/libft.h"
#include "../ft_printf.h"

int		ft_printf(const char *format, ...);

int		main(void)
{
	int					nprinted_libc = 0;
	int					nprinted_mine = 0;

	// setbuf(stdout, NULL);
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%d\n");

	nprinted_libc = printf("arg:0|spec:d@libc:%d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:d@mine:%d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:d@libc:%d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:d@mine:%d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:d@libc:%d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:d@mine:%d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:d@libc:%d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:d@mine:%d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:d@libc:%d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:d@mine:%d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:d@libc:%d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:d@mine:%d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-d\n");

	nprinted_libc = printf("arg:0|spec:-d@libc:%-d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-d@mine:%-d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-d@libc:%-d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-d@mine:%-d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-d@libc:%-d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-d@mine:%-d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-d@libc:%-d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-d@mine:%-d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-d@libc:%-d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-d@mine:%-d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-d@libc:%-d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-d@mine:%-d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-+d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-+d\n");

	nprinted_libc = printf("arg:0|spec:-+d@libc:%-+d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-+d@mine:%-+d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-+d@libc:%-+d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-+d@mine:%-+d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-+d@libc:%-+d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-+d@mine:%-+d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-+d@libc:%-+d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-+d@mine:%-+d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-+d@libc:%-+d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-+d@mine:%-+d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-+d@libc:%-+d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-+d@mine:%-+d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-+d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %+d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%+d\n");

	nprinted_libc = printf("arg:0|spec:+d@libc:%+d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:+d@mine:%+d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:+d@libc:%+d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:+d@mine:%+d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:+d@libc:%+d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:+d@mine:%+d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:+d@libc:%+d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:+d@mine:%+d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:+d@libc:%+d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:+d@mine:%+d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:+d@libc:%+d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:+d@mine:%+d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%+d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' 'd
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' 'd\n");

	nprinted_libc = printf("arg:0|spec: d@libc:% d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: d@mine:% d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: d@libc:% d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: d@mine:% d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: d@libc:% d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: d@mine:% d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: d@libc:% d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: d@mine:% d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: d@libc:% d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: d@mine:% d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: d@libc:% d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: d@mine:% d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' 'd\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' 'd

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '-d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '-d\n");

	nprinted_libc = printf("arg:0|spec: -d@libc:% -d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: -d@mine:% -d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: -d@libc:% -d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: -d@mine:% -d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: -d@libc:% -d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: -d@mine:% -d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: -d@libc:% -d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: -d@mine:% -d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: -d@libc:% -d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: -d@mine:% -d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: -d@libc:% -d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: -d@mine:% -d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '-d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '-d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '0d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '0d\n");

	nprinted_libc = printf("arg:0|spec: 0d@libc:% 0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 0d@mine:% 0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 0d@libc:% 0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 0d@mine:% 0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 0d@libc:% 0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 0d@mine:% 0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 0d@libc:% 0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 0d@mine:% 0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 0d@libc:% 0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 0d@mine:% 0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 0d@libc:% 0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 0d@mine:% 0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '0d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '0d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0d\n");

	nprinted_libc = printf("arg:0|spec:0d@libc:%0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:0d@mine:%0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0d@libc:%0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0d@mine:%0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0d@libc:%0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0d@mine:%0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0d@libc:%0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0d@mine:%0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0d@libc:%0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0d@mine:%0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0d@libc:%0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0d@mine:%0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0+d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0+d\n");

	nprinted_libc = printf("arg:0|spec:0+d@libc:%0+d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:0+d@mine:%0+d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0+d@libc:%0+d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0+d@mine:%0+d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0+d@libc:%0+d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0+d@mine:%0+d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0+d@libc:%0+d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0+d@mine:%0+d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0+d@libc:%0+d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0+d@mine:%0+d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0+d@libc:%0+d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0+d@mine:%0+d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0+d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0+d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0|spec:00d@libc:%00d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:00d@mine:%00d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:00d@libc:%00d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:00d@mine:%00d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:00d@libc:%00d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:00d@mine:%00d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:00d@libc:%00d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:00d@mine:%00d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:00d@libc:%00d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:00d@mine:%00d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:00d@libc:%00d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:00d@mine:%00d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec:5d@libc:%5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:5d@mine:%5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:9d@libc:%9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:9d@mine:%9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:9d@libc:%9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:9d@mine:%9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:13d@libc:%13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:13d@mine:%13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:13d@libc:%13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:13d@mine:%13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:13d@libc:%13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:13d@mine:%13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	// nprinted_libc = printf("arg:0|spec:-00d@libc:%-00d\n", 0);
	// nprinted_mine = ft_printf("arg:0|spec:-00d@mine:%-00d\n", 0);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:123456|spec:-00d@libc:%-00d\n", 123456);
	// nprinted_mine = ft_printf("arg:123456|spec:-00d@mine:%-00d\n", 123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:-123456|spec:-00d@libc:%-00d\n", -123456);
	// nprinted_mine = ft_printf("arg:-123456|spec:-00d@mine:%-00d\n", -123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:INT_MIN@|spec:-00d@libc:%-00d\n", INT_MIN);
	// nprinted_mine = ft_printf("arg:INT_MIN@|spec:-00d@mine:%-00d\n", INT_MIN);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:INT_MAX|spec:-00d@libc:%-00d\n", INT_MAX);
	// nprinted_mine = ft_printf("arg:INT_MAX|spec:-00d@mine:%-00d\n", INT_MAX);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:UINT_MAX|spec:-00d@libc:%-00d\n", UINT_MAX);
	// nprinted_mine = ft_printf("arg:UINT_MAX|spec:-00d@mine:%-00d\n", UINT_MAX);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec:-5d@libc:%-5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-5d@mine:%-5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-9d@libc:%-9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-9d@mine:%-9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-9d@libc:%-9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-9d@mine:%-9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-13d@libc:%-13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-13d@mine:%-13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-13d@libc:%-13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-13d@mine:%-13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-13d@libc:%-13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-13d@mine:%-13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-+(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-+(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	// nprinted_libc = printf("arg:0|spec:-+00d@libc:%-+00d\n", 0);
	// nprinted_mine = ft_printf("arg:0|spec:-+00d@mine:%-+00d\n", 0);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:123456|spec:-+00d@libc:%-+00d\n", 123456);
	// nprinted_mine = ft_printf("arg:123456|spec:-+00d@mine:%-+00d\n", 123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:-123456|spec:-+00d@libc:%-+00d\n", -123456);
	// nprinted_mine = ft_printf("arg:-123456|spec:-+00d@mine:%-+00d\n", -123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:INT_MIN@|spec:-+00d@libc:%-+00d\n", INT_MIN);
	// nprinted_mine = ft_printf("arg:INT_MIN@|spec:-+00d@mine:%-+00d\n", INT_MIN);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:INT_MAX|spec:-+00d@libc:%-+00d\n", INT_MAX);
	// nprinted_mine = ft_printf("arg:INT_MAX|spec:-+00d@mine:%-+00d\n", INT_MAX);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:UINT_MAX|spec:-+00d@libc:%-+00d\n", UINT_MAX);
	// nprinted_mine = ft_printf("arg:UINT_MAX|spec:-+00d@mine:%-+00d\n", UINT_MAX);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec:-+5d@libc:%-+5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-+5d@mine:%-+5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-+9d@libc:%-+9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-+9d@mine:%-+9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-+9d@libc:%-+9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-+9d@mine:%-+9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-+13d@libc:%-+13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-+13d@mine:%-+13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-+13d@libc:%-+13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-+13d@mine:%-+13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-+13d@libc:%-+13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-+13d@mine:%-+13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-+(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-+(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %+(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%+(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0|spec:+00d@libc:%+00d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:+00d@mine:%+00d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:+00d@libc:%+00d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:+00d@mine:%+00d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:+00d@libc:%+00d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:+00d@mine:%+00d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:+00d@libc:%+00d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:+00d@mine:%+00d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:+00d@libc:%+00d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:+00d@mine:%+00d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:+00d@libc:%+00d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:+00d@mine:%+00d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec:+5d@libc:%+5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:+5d@mine:%+5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:+9d@libc:%+9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:+9d@mine:%+9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:+9d@libc:%+9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:+9d@mine:%+9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:+13d@libc:%+13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:+13d@mine:%+13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:+13d@libc:%+13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:+13d@mine:%+13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:+13d@libc:%+13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:+13d@mine:%+13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%+(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %+(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0|spec: 00d@libc:% 00d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 00d@mine:% 00d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 00d@libc:% 00d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 00d@mine:% 00d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 00d@libc:% 00d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 00d@mine:% 00d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 00d@libc:% 00d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 00d@mine:% 00d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 00d@libc:% 00d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 00d@mine:% 00d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 00d@libc:% 00d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 00d@mine:% 00d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec: 5d@libc:% 5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 5d@mine:% 5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 9d@libc:% 9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 9d@mine:% 9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 9d@libc:% 9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 9d@mine:% 9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 13d@libc:% 13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 13d@mine:% 13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 13d@libc:% 13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 13d@mine:% 13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 13d@libc:% 13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 13d@mine:% 13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '-(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '-(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	// nprinted_libc = printf("arg:0|spec: -00d@libc:% -00d\n", 0);
	// nprinted_mine = ft_printf("arg:0|spec: -00d@mine:% -00d\n", 0);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:123456|spec: -00d@libc:% -00d\n", 123456);
	// nprinted_mine = ft_printf("arg:123456|spec: -00d@mine:% -00d\n", 123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:-123456|spec: -00d@libc:% -00d\n", -123456);
	// nprinted_mine = ft_printf("arg:-123456|spec: -00d@mine:% -00d\n", -123456);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:INT_MIN@|spec: -00d@libc:% -00d\n", INT_MIN);
	// nprinted_mine = ft_printf("arg:INT_MIN@|spec: -00d@mine:% -00d\n", INT_MIN);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:INT_MAX|spec: -00d@libc:% -00d\n", INT_MAX);
	// nprinted_mine = ft_printf("arg:INT_MAX|spec: -00d@mine:% -00d\n", INT_MAX);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);

	// nprinted_libc = printf("arg:UINT_MAX|spec: -00d@libc:% -00d\n", UINT_MAX);
	// nprinted_mine = ft_printf("arg:UINT_MAX|spec: -00d@mine:% -00d\n", UINT_MAX);
	// printf("nprinted@libc:%d\n", nprinted_libc);
	// printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec: -5d@libc:% -5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: -5d@mine:% -5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: -9d@libc:% -9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: -9d@mine:% -9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: -9d@libc:% -9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: -9d@mine:% -9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: -13d@libc:% -13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: -13d@mine:% -13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: -13d@libc:% -13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: -13d@mine:% -13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: -13d@libc:% -13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: -13d@mine:% -13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '-(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '-(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '0(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '0(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0|spec: 00d@libc:% 00d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 00d@mine:% 00d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 00d@libc:% 00d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 00d@mine:% 00d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 00d@libc:% 00d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 00d@mine:% 00d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 00d@libc:% 00d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 00d@mine:% 00d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 00d@libc:% 00d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 00d@mine:% 00d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 00d@libc:% 00d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 00d@mine:% 00d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec: 05d@libc:% 05d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 05d@mine:% 05d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 09d@libc:% 09d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 09d@mine:% 09d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 09d@libc:% 09d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 09d@mine:% 09d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 013d@libc:% 013d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 013d@mine:% 013d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 013d@libc:% 013d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 013d@mine:% 013d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 013d@libc:% 013d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 013d@mine:% 013d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '0(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '0(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0|spec:00d@libc:%00d\n",0);
	nprinted_mine = ft_printf("arg:0|spec:00d@mine:%00d\n",0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:00d@libc:%00d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:00d@mine:%00d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:00d@libc:%00d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:00d@mine:%00d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:00d@libc:%00d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:00d@mine:%00d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:00d@libc:%00d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:00d@mine:%00d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:00d@libc:%00d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:00d@mine:%00d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec:05d@libc:%05d\n",0);
	nprinted_mine = ft_printf("arg:0|spec:05d@mine:%05d\n",0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:09d@libc:%09d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:09d@mine:%09d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:09d@libc:%09d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:09d@mine:%09d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:013d@libc:%013d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:013d@mine:%013d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:013d@libc:%013d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:013d@mine:%013d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:013d@libc:%013d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:013d@mine:%013d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0+(w)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0+(w)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0|spec:0+0d@libc:%0+0d\n",0);
	nprinted_mine = ft_printf("arg:0|spec:0+0d@mine:%0+0d\n",0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0+0d@libc:%0+0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0+0d@mine:%0+0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0+0d@libc:%0+0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0+0d@mine:%0+0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0+0d@libc:%0+0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0+0d@mine:%0+0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0+0d@libc:%0+0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0+0d@mine:%0+0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0+0d@libc:%0+0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0+0d@mine:%0+0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:0|spec:0+5d@libc:%0+5d\n",0);
	nprinted_mine = ft_printf("arg:0|spec:0+5d@mine:%0+5d\n",0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0+9d@libc:%0+9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0+9d@mine:%0+9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0+9d@libc:%0+9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0+9d@mine:%0+9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0+13d@libc:%0+13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0+13d@mine:%0+13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0+13d@libc:%0+13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0+13d@mine:%0+13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0+13d@libc:%0+13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0+13d@mine:%0+13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0+(w)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0+(w)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec:*d@libc:%*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:*d@mine:%*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:*d@libc:%*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:*d@mine:%*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:*d@libc:%*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:*d@mine:%*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:*d@libc:%*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:*d@mine:%*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:*d@libc:%*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:*d@mine:%*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:*d@libc:%*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:*d@mine:%*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> wdith:0

	nprinted_libc = printf("arg:5, 0|spec:*d@libc:%*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:*d@mine:%*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:*d@libc:%*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:*d@mine:%*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:*d@libc:%*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:*d@mine:%*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:*d@libc:%*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:*d@mine:%*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:*d@libc:%*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:*d@mine:%*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:*d@libc:%*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:*d@mine:%*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec:-*d@libc:%-*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:-*d@mine:%-*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:-*d@libc:%-*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:-*d@mine:%-*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:-*d@libc:%-*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:-*d@mine:%-*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:-*d@libc:%-*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:-*d@mine:%-*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:-*d@libc:%-*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:-*d@mine:%-*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:-*d@libc:%-*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:-*d@mine:%-*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec:-*d@libc:%-*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:-*d@mine:%-*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:-*d@libc:%-*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:-*d@mine:%-*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:-*d@libc:%-*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:-*d@mine:%-*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:-*d@libc:%-*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:-*d@mine:%-*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:-*d@libc:%-*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:-*d@mine:%-*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:-*d@libc:%-*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:-*d@mine:%-*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-+*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-+*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec:-+*d@libc:%-+*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:-+*d@mine:%-+*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:-+*d@libc:%-+*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:-+*d@mine:%-+*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:-+*d@libc:%-+*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:-+*d@mine:%-+*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:-+*d@libc:%-+*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:-+*d@mine:%-+*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:-+*d@libc:%-+*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:-+*d@mine:%-+*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:-+*d@libc:%-+*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:-+*d@mine:%-+*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec:-+*d@libc:%-+*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:-+*d@mine:%-+*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:-+*d@libc:%-+*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:-+*d@mine:%-+*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:-+*d@libc:%-+*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:-+*d@mine:%-+*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:-+*d@libc:%-+*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:-+*d@mine:%-+*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:-+*d@libc:%-+*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:-+*d@mine:%-+*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:-+*d@libc:%-+*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:-+*d@mine:%-+*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-+*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-+*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %+*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%+*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec:+*d@libc:%+*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:+*d@mine:%+*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:+*d@libc:%+*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:+*d@mine:%+*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:+*d@libc:%+*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:+*d@mine:%+*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:+*d@libc:%+*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:+*d@mine:%+*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:+*d@libc:%+*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:+*d@mine:%+*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:+*d@libc:%+*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:+*d@mine:%+*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec:+*d@libc:%+*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:+*d@mine:%+*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:+*d@libc:%+*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:+*d@mine:%+*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:+*d@libc:%+*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:+*d@mine:%+*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:+*d@libc:%+*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:+*d@mine:%+*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:+*d@libc:%+*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:+*d@mine:%+*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:+*d@libc:%+*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:+*d@mine:%+*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%+*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %+*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec: *d@libc:% *d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec: *d@mine:% *d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec: *d@libc:% *d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec: *d@mine:% *d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec: *d@libc:% *d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec: *d@mine:% *d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec: *d@libc:% *d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec: *d@mine:% *d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec: *d@libc:% *d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec: *d@mine:% *d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec: *d@libc:% *d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec: *d@mine:% *d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec: *d@libc:% *d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec: *d@mine:% *d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec: *d@libc:% *d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec: *d@mine:% *d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec: *d@libc:% *d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec: *d@mine:% *d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec: *d@libc:% *d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec: *d@mine:% *d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec: *d@libc:% *d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec: *d@mine:% *d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec: *d@libc:% *d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec: *d@mine:% *d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '-*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '-*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec: -*d@libc:% -*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec: -*d@mine:% -*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec: -*d@libc:% -*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec: -*d@mine:% -*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec: -*d@libc:% -*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec: -*d@mine:% -*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec: -*d@libc:% -*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec: -*d@mine:% -*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec: -*d@libc:% -*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec: -*d@mine:% -*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec: -*d@libc:% -*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec: -*d@mine:% -*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec: -*d@libc:% -*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec: -*d@mine:% -*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec: -*d@libc:% -*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec: -*d@mine:% -*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec: -*d@libc:% -*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec: -*d@mine:% -*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec: -*d@libc:% -*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec: -*d@mine:% -*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec: -*d@libc:% -*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec: -*d@mine:% -*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec: -*d@libc:% -*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec: -*d@mine:% -*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '-*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '-*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '0*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '0*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec: *d@libc:% *d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec: *d@mine:% *d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec: *d@libc:% *d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec: *d@mine:% *d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec: *d@libc:% *d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec: *d@mine:% *d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec: 0*d@libc:% 0*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec: 0*d@mine:% 0*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec: 0*d@libc:% 0*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec: 0*d@mine:% 0*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec: 0*d@libc:% 0*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec: 0*d@mine:% 0*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec: *d@libc:% *d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec: *d@mine:% *d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec: *d@libc:% *d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec: *d@mine:% *d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec: *d@libc:% *d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec: *d@mine:% *d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec: 0*d@libc:% 0*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec: 0*d@mine:% 0*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec: 0*d@libc:% 0*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec: 0*d@mine:% 0*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec: 0*d@libc:% 0*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec: 0*d@mine:% 0*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '0*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '0*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec:*d@libc:%*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:*d@mine:%*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:*d@libc:%*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:*d@mine:%*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:*d@libc:%*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:*d@mine:%*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:0*d@libc:%0*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:0*d@mine:%0*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:0*d@libc:%0*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:0*d@mine:%0*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:0*d@libc:%0*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:0*d@mine:%0*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec:*d@libc:%*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:*d@mine:%*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:*d@libc:%*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:*d@mine:%*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:*d@libc:%*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:*d@mine:%*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:0*d@libc:%0*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:0*d@mine:%0*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:0*d@libc:%0*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:0*d@mine:%0*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:0*d@libc:%0*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:0*d@mine:%0*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0+*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0+*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< width:0
	nprinted_libc = printf("arg:0, 0|spec:0+*d@libc:%0+*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:0+*d@mine:%0+*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:0+*d@libc:%0+*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:0+*d@mine:%0+*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:0+*d@libc:%0+*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:0+*d@mine:%0+*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:0+*d@libc:%0+*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:0+*d@mine:%0+*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:0+*d@libc:%0+*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:0+*d@mine:%0+*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:0+*d@libc:%0+*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:0+*d@mine:%0+*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> width:0

	nprinted_libc = printf("arg:5, 0|spec:0+*d@libc:%0+*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:0+*d@mine:%0+*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:0+*d@libc:%0+*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:0+*d@mine:%0+*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:0+*d@libc:%0+*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:0+*d@mine:%0+*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:0+*d@libc:%0+*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:0+*d@mine:%0+*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:0+*d@libc:%0+*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:0+*d@mine:%0+*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:0+*d@libc:%0+*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:0+*d@mine:%0+*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0+*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0+*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec:.0d@libc:%.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:.0d@mine:%.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:.0d@libc:%.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:.0d@mine:%.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:.0d@libc:%.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:.0d@mine:%.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:.0d@libc:%.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:.0d@mine:%.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:.0d@libc:%.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:.0d@mine:%.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:.0d@libc:%.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:.0d@mine:%.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec:.5d@libc:%.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:.5d@mine:%.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:.9d@libc:%.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:.9d@mine:%.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:.9d@libc:%.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:.9d@mine:%.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:.13d@libc:%.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:.13d@mine:%.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:.13d@libc:%.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:.13d@mine:%.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:.13d@libc:%.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:.13d@mine:%.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec:-.0d@libc:%-.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-.0d@mine:%-.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-.0d@libc:%-.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-.0d@mine:%-.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-.0d@libc:%-.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-.0d@mine:%-.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-.0d@libc:%-.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-.0d@mine:%-.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-.0d@libc:%-.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-.0d@mine:%-.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-.0d@libc:%-.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-.0d@mine:%-.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec:-.5d@libc:%-.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-.5d@mine:%-.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-.9d@libc:%-.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-.9d@mine:%-.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-.9d@libc:%-.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-.9d@mine:%-.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-.13d@libc:%-.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-.13d@mine:%-.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-.13d@libc:%-.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-.13d@mine:%-.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-.13d@libc:%-.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-.13d@mine:%-.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-+.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-+.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec:-+.0d@libc:%-+.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-+.0d@mine:%-+.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-+.0d@libc:%-+.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-+.0d@mine:%-+.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-+.0d@libc:%-+.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-+.0d@mine:%-+.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-+.0d@libc:%-+.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-+.0d@mine:%-+.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-+.0d@libc:%-+.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-+.0d@mine:%-+.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-+.0d@libc:%-+.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-+.0d@mine:%-+.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec:-+.5d@libc:%-+.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:-+.5d@mine:%-+.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:-+.9d@libc:%-+.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:-+.9d@mine:%-+.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:-+.9d@libc:%-+.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:-+.9d@mine:%-+.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:-+.13d@libc:%-+.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:-+.13d@mine:%-+.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:-+.13d@libc:%-+.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:-+.13d@mine:%-+.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:-+.13d@libc:%-+.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:-+.13d@mine:%-+.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-+.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-+.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %+.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%+.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec:+.0d@libc:%+.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:+.0d@mine:%+.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:+.0d@libc:%+.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:+.0d@mine:%+.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:+.0d@libc:%+.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:+.0d@mine:%+.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:+.0d@libc:%+.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:+.0d@mine:%+.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:+.0d@libc:%+.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:+.0d@mine:%+.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:+.0d@libc:%+.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:+.0d@mine:%+.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec:+.5d@libc:%+.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:+.5d@mine:%+.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:+.9d@libc:%+.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:+.9d@mine:%+.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:+.9d@libc:%+.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:+.9d@mine:%+.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:+.13d@libc:%+.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:+.13d@mine:%+.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:+.13d@libc:%+.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:+.13d@mine:%+.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:+.13d@libc:%+.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:+.13d@mine:%+.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%+.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %+.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec: .0d@libc:% .0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: .0d@mine:% .0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: .0d@libc:% .0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: .0d@mine:% .0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: .0d@libc:% .0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: .0d@mine:% .0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: .0d@libc:% .0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: .0d@mine:% .0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: .0d@libc:% .0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: .0d@mine:% .0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: .0d@libc:% .0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: .0d@mine:% .0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec: .5d@libc:% .5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: .5d@mine:% .5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: .5d@libc:% .5d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: .5d@mine:% .5d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: .5d@libc:% .5d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: .5d@mine:% .5d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: .13d@libc:% .13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: .13d@mine:% .13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: .13d@libc:% .13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: .13d@mine:% .13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: .13d@libc:% .13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: .13d@mine:% .13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '-.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '-.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec: -.0d@libc:% -.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: -.0d@mine:% -.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: -.0d@libc:% -.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: -.0d@mine:% -.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: -.0d@libc:% -.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: -.0d@mine:% -.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: -.0d@libc:% -.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: -.0d@mine:% -.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: -.0d@libc:% -.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: -.0d@mine:% -.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: -.0d@libc:% -.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: -.0d@mine:% -.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec: -.5d@libc:% -.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: -.5d@mine:% -.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: -.9d@libc:% -.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: -.9d@mine:% -.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: -.9d@libc:% -.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: -.9d@mine:% -.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: -.13d@libc:% -.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: -.13d@mine:% -.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: -.13d@libc:% -.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: -.13d@mine:% -.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: -.13d@libc:% -.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: -.13d@mine:% -.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '-.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '-.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '0.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '0.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec: 0.0d@libc:% 0.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 0.0d@mine:% 0.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 0.0d@libc:% 0.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 0.0d@mine:% 0.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 0.0d@libc:% 0.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 0.0d@mine:% 0.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 0.0d@libc:% 0.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 0.0d@mine:% 0.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 0.0d@libc:% 0.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 0.0d@mine:% 0.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 0.0d@libc:% 0.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 0.0d@mine:% 0.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec: 0.5d@libc:% 0.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec: 0.5d@mine:% 0.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec: 0.9d@libc:% 0.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec: 0.9d@mine:% 0.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec: 0.9d@libc:% 0.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec: 0.9d@mine:% 0.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec: 0.13d@libc:% 0.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec: 0.13d@mine:% 0.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec: 0.13d@libc:% 0.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec: 0.13d@mine:% 0.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec: 0.13d@libc:% 0.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec: 0.13d@mine:% 0.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '0.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '0.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec:0.0d@libc:%0.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:0.0d@mine:%0.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0.0d@libc:%0.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0.0d@mine:%0.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0.0d@libc:%0.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0.0d@mine:%0.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0.0d@libc:%0.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0.0d@mine:%0.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0.0d@libc:%0.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0.0d@mine:%0.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0.0d@libc:%0.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0.0d@mine:%0.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec:0.5d@libc:%0.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:0.5d@mine:%0.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0.9d@libc:%0.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0.9d@mine:%0.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0.9d@libc:%0.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0.9d@mine:%0.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0.13d@libc:%0.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0.13d@mine:%0.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0.13d@libc:%0.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0.13d@mine:%0.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0.13d@libc:%0.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0.13d@mine:%0.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0+.(p)d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0+.(p)d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0|spec:0+.0d@libc:%0+.0d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:0+.0d@mine:%0+.0d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0+.0d@libc:%0+.0d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0+.0d@mine:%0+.0d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0+.0d@libc:%0+.0d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0+.0d@mine:%0+.0d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0+.0d@libc:%0+.0d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0+.0d@mine:%0+.0d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0+.0d@libc:%0+.0d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0+.0d@mine:%0+.0d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0+.0d@libc:%0+.0d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0+.0d@mine:%0+.0d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:0|spec:0+.5d@libc:%0+.5d\n", 0);
	nprinted_mine = ft_printf("arg:0|spec:0+.5d@mine:%0+.5d\n", 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:123456|spec:0+.9d@libc:%0+.9d\n", 123456);
	nprinted_mine = ft_printf("arg:123456|spec:0+.9d@mine:%0+.9d\n", 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:-123456|spec:0+.9d@libc:%0+.9d\n", -123456);
	nprinted_mine = ft_printf("arg:-123456|spec:0+.9d@mine:%0+.9d\n", -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MIN@|spec:0+.13d@libc:%0+.13d\n", INT_MIN);
	nprinted_mine = ft_printf("arg:INT_MIN@|spec:0+.13d@mine:%0+.13d\n", INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:INT_MAX|spec:0+.13d@libc:%0+.13d\n", INT_MAX);
	nprinted_mine = ft_printf("arg:INT_MAX|spec:0+.13d@mine:%0+.13d\n", INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:UINT_MAX|spec:0+.13d@libc:%0+.13d\n", UINT_MAX);
	nprinted_mine = ft_printf("arg:UINT_MAX|spec:0+.13d@mine:%0+.13d\n", UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0+.(p)d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0+.(p)d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec:.*d@libc:%.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:.*d@mine:%.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:.*d@libc:%.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:.*d@mine:%.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:.*d@libc:%.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:.*d@mine:%.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:.*d@libc:%.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:.*d@mine:%.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:.*d@libc:%.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:.*d@mine:%.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:.*d@libc:%.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:.*d@mine:%.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec:.*d@libc:%.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:.*d@mine:%.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:.*d@libc:%.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:.*d@mine:%.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:.*d@libc:%.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:.*d@mine:%.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:.*d@libc:%.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:.*d@mine:%.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:.*d@libc:%.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:.*d@mine:%.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:.*d@libc:%.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:.*d@mine:%.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec:-.*d@libc:%-.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:-.*d@mine:%-.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:-.*d@libc:%-.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:-.*d@mine:%-.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:-.*d@libc:%-.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:-.*d@mine:%-.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:-.*d@libc:%-.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:-.*d@mine:%-.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:-.*d@libc:%-.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:-.*d@mine:%-.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:-.*d@libc:%-.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:-.*d@mine:%-.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec:-.*d@libc:%-.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:-.*d@mine:%-.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:-.*d@libc:%-.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:-.*d@mine:%-.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:-.*d@libc:%-.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:-.*d@mine:%-.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:-.*d@libc:%-.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:-.*d@mine:%-.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:-.*d@libc:%-.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:-.*d@mine:%-.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:-.*d@libc:%-.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:-.*d@mine:%-.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %-+.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%-+.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec:-+.*d@libc:%-+.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:-+.*d@mine:%-+.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:-+.*d@libc:%-+.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:-+.*d@mine:%-+.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:-+.*d@libc:%-+.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:-+.*d@mine:%-+.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:-+.*d@libc:%-+.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:-+.*d@mine:%-+.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:-+.*d@libc:%-+.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:-+.*d@mine:%-+.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:-+.*d@libc:%-+.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:-+.*d@mine:%-+.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec:-+.*d@libc:%-+.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:-+.*d@mine:%-+.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:-+.*d@libc:%-+.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:-+.*d@mine:%-+.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:-+.*d@libc:%-+.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:-+.*d@mine:%-+.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:-+.*d@libc:%-+.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:-+.*d@mine:%-+.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:-+.*d@libc:%-+.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:-+.*d@mine:%-+.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:-+.*d@libc:%-+.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:-+.*d@mine:%-+.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%-+.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %-+.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %+.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%+.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec:+.*d@libc:%+.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:+.*d@mine:%+.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:+.*d@libc:%+.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:+.*d@mine:%+.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:+.*d@libc:%+.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:+.*d@mine:%+.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:+.*d@libc:%+.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:+.*d@mine:%+.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:+.*d@libc:%+.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:+.*d@mine:%+.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:+.*d@libc:%+.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:+.*d@mine:%+.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec:+.*d@libc:%+.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:+.*d@mine:%+.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:+.*d@libc:%+.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:+.*d@mine:%+.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:+.*d@libc:%+.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:+.*d@mine:%+.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:+.*d@libc:%+.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:+.*d@mine:%+.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:+.*d@libc:%+.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:+.*d@mine:%+.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:+.*d@libc:%+.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:+.*d@mine:%+.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%+.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %+.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec: .*d@libc:% .*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec: .*d@mine:% .*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec: .*d@libc:% .*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec: .*d@mine:% .*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec: .*d@libc:% .*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec: .*d@mine:% .*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec: .*d@libc:% .*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec: .*d@mine:% .*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec: .*d@libc:% .*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec: .*d@mine:% .*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec: .*d@libc:% .*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec: .*d@mine:% .*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec: .*d@libc:% .*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec: .*d@mine:% .*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec: .*d@libc:% .*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec: .*d@mine:% .*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec: .*d@libc:% .*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec: .*d@mine:% .*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec: .*d@libc:% .*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec: .*d@mine:% .*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec: .*d@libc:% .*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec: .*d@mine:% .*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec: .*d@libc:% .*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec: .*d@mine:% .*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '-.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '-.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec: -.*d@libc:% -.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec: -.*d@mine:% -.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec: -.*d@libc:% -.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec: -.*d@mine:% -.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec: -.*d@libc:% -.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec: -.*d@mine:% -.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec: -.*d@libc:% -.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec: -.*d@mine:% -.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec: -.*d@libc:% -.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec: -.*d@mine:% -.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec: -.*d@libc:% -.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec: -.*d@mine:% -.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec: -.*d@libc:% -.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec: -.*d@mine:% -.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec: -.*d@libc:% -.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec: -.*d@mine:% -.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec: -.*d@libc:% -.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec: -.*d@mine:% -.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec: -.*d@libc:% -.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec: -.*d@mine:% -.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec: -.*d@libc:% -.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec: -.*d@mine:% -.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec: -.*d@libc:% -.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec: -.*d@mine:% -.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '-.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '-.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %' '0.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%' '0.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec: .*d@libc:% .*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec: .*d@mine:% .*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec: .*d@libc:% .*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec: .*d@mine:% .*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec: .*d@libc:% .*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec: .*d@mine:% .*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec: 0.*d@libc:% 0.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec: 0.*d@mine:% 0.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec: 0.*d@libc:% 0.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec: 0.*d@mine:% 0.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec: 0.*d@libc:% 0.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec: 0.*d@mine:% 0.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec: .*d@libc:% .*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec: .*d@mine:% .*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec: .*d@libc:% .*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec: .*d@mine:% .*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec: .*d@libc:% .*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec: .*d@mine:% .*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec: 0.*d@libc:% 0.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec: 0.*d@mine:% 0.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec: 0.*d@libc:% 0.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec: 0.*d@mine:% 0.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec: 0.*d@libc:% 0.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec: 0.*d@mine:% 0.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%' '0.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %' '0.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec:.*d@libc:%.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:.*d@mine:%.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:.*d@libc:%.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:.*d@mine:%.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:.*d@libc:%.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:.*d@mine:%.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:0.*d@libc:%0.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:0.*d@mine:%0.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:0.*d@libc:%0.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:0.*d@mine:%0.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:0.*d@libc:%0.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:0.*d@mine:%0.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec:.*d@libc:%.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:.*d@mine:%.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:.*d@libc:%.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:.*d@mine:%.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:.*d@libc:%.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:.*d@mine:%.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:0.*d@libc:%0.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:0.*d@mine:%0.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:0.*d@libc:%0.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:0.*d@mine:%0.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:0.*d@libc:%0.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:0.*d@mine:%0.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0.*d

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %0+.*d
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%0+.*d\n");

	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< precision:0
	nprinted_libc = printf("arg:0, 0|spec:0+.*d@libc:%0+.*d\n", 0, 0);
	nprinted_mine = ft_printf("arg:0, 0|spec:0+.*d@mine:%0+.*d\n", 0, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, 123456|spec:0+.*d@libc:%0+.*d\n", 0, 123456);
	nprinted_mine = ft_printf("arg:0, 123456|spec:0+.*d@mine:%0+.*d\n", 0, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, -123456|spec:0+.*d@libc:%0+.*d\n", 0, -123456);
	nprinted_mine = ft_printf("arg:0, -123456|spec:0+.*d@mine:%0+.*d\n", 0, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MIN@|spec:0+.*d@libc:%0+.*d\n", 0, INT_MIN);
	nprinted_mine = ft_printf("arg:0, INT_MIN@|spec:0+.*d@mine:%0+.*d\n", 0, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, INT_MAX|spec:0+.*d@libc:%0+.*d\n", 0, INT_MAX);
	nprinted_mine = ft_printf("arg:0, INT_MAX|spec:0+.*d@mine:%0+.*d\n", 0, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:0, UINT_MAX|spec:0+.*d@libc:%0+.*d\n", 0, UINT_MAX);
	nprinted_mine = ft_printf("arg:0, UINT_MAX|spec:0+.*d@mine:%0+.*d\n", 0, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> precision:0

	nprinted_libc = printf("arg:5, 0|spec:0+.*d@libc:%0+.*d\n", 5, 0);
	nprinted_mine = ft_printf("arg:5, 0|spec:0+.*d@mine:%0+.*d\n", 5, 0);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, 123456|spec:0+.*d@libc:%0+.*d\n", 9, 123456);
	nprinted_mine = ft_printf("arg:9, 123456|spec:0+.*d@mine:%0+.*d\n", 9, 123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:9, -123456|spec:0+.*d@libc:%0+.*d\n", 9, -123456);
	nprinted_mine = ft_printf("arg:9, -123456|spec:0+.*d@mine:%0+.*d\n", 9, -123456);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MIN@|spec:0+.*d@libc:%0+.*d\n", 13, INT_MIN);
	nprinted_mine = ft_printf("arg:13, INT_MIN@|spec:0+.*d@mine:%0+.*d\n", 13, INT_MIN);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, INT_MAX|spec:0+.*d@libc:%0+.*d\n", 13, INT_MAX);
	nprinted_mine = ft_printf("arg:13, INT_MAX|spec:0+.*d@mine:%0+.*d\n", 13, INT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n\n", nprinted_mine);

	nprinted_libc = printf("arg:13, UINT_MAX|spec:0+.*d@libc:%0+.*d\n", 13, UINT_MAX);
	nprinted_mine = ft_printf("arg:13, UINT_MAX|spec:0+.*d@mine:%0+.*d\n", 13, UINT_MAX);
	printf("nprinted@libc:%d\n", nprinted_libc);
	printf("nprinted@mine:%d\n", nprinted_mine);

	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%0+.*d\n\n");
	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %0+.*d

	return (0);
}

