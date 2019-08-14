// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "libft/libft.h"
#include "ft_printf.h"

int		parse_format(void)
{
	ft_putstr("parse_format called");
	return (1);
}

ssize_t	parse(const char *format, t_format *recipe, va_list ap)
{
	size_t	i;
	
	i = 0;
	while (format[i] != '%' && format[i])
	{
		if (!(ft_strchr(ALLSYMBOLS, format[i])))
			recipe->nprinted += write(1, &format[i], 1);
		else if (format[i] == '%')
		{
			if (!(ft_strchr(ALLSYMBOLS, format[i + 1])))
				break;
			while (ft_strchr(ALLSYMBOLS, format[i]))
			{
				i++;
				if (ft_strchr(CONVERSIONS, format[i]))
				{
					recipe->nprinted = parse_format() + 2;
					break ;
				}
				else
					recipe->nprinted = parse_format();
			}
			continue;
		}
		i++;
	}
	return (recipe->nprinted);
}

void	bzero_recipe(t_format *recipe)
{
	recipe->nprinted = 0;
	recipe->i = 0;
	recipe->len = 0;
	recipe->hash = 0;
	recipe->zero = 0;
	recipe->minus = 0;
	recipe->plus = 0;
	recipe->space = 0;
	recipe->width = 0;
	recipe->precision = 0;
	recipe->length = 0;
}

int		ft_printf(const char *format, ...)
{
	t_format	*recipe;
	ssize_t		printed_bytes;
	int			format_len;
	va_list		ap;

	format_len = ft_strlen(format);

	if (!(recipe = (t_format *)malloc(sizeof(t_format))))
		return (0);

	bzero_recipe(recipe);

	recipe->format = format;

	va_start(ap, format);

	printed_bytes = parse(format, recipe, ap);

	// parse_conversion(format, ap, parse_format(format, ap));

	va_end(ap);

	return (printed_bytes);
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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< %%
	ft_putstr("<%%>\n");
	printf("libc:%%\n");
	ft_putstr("mine:");
	ft_printf("%%");
	ft_putstr("\n</%%>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> %%

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< combined
	ft_putstr("<combined (libc)>\n");
	printf("libc:int => %d\nampersand => %%\nhex(lower) => %x", d, x);
	setbuf(stdout, NULL);
	ft_putstr("\n</combined (libc)>\n\n");
	ft_putstr("<combined (min)>\n");
	ft_printf("mine:int => %d\nampersand => %%\nhex(lo) => %x", d, x);
	ft_putstr("\n</combined (min)>\n\n");
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> combined

	return (0);
}

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< backup
// int		ft_printf(const char *s, ...)
// {
// 	size_t	i;
// 	va_list	ap;

// 	i = 0;
// 	va_start(ap, s);
// 	while (s[i])
// 	{
// 		if (s[i] == '%')
// 		{
// 			if (g_jump_table[(unsigned char)s[i + 1]])
// 			{
// 				g_jump_table[(unsigned char)s[i + 1]](ap);
// 				i++;
// 			}
// 			else if (s[i + 1] == '%')
// 				ft_putchar('%');
// 		}
// 		else
// 			write(1, &s[i], 1);
// 		i++;
// 	}
// 	va_end(ap);

// 	return (0);
// }
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> backup

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< backup
// printer	*g_jump_table[256] =
// {
// 	['d'] = &conversion_d,
// 	['i'] = &conversion_d,
// 	['c'] = &conversion_c,
// 	['s'] = &conversion_s,
// 	['f'] = &conversion_f,
// 	['u'] = &conversion_u,
// 	['o'] = &conversion_o,
// 	['X'] = &conversion_X,
// 	['x'] = &conversion_x,
// 	['p'] = &conversion_p,
// 	// ['%'] = &conversion_amp,
// };

// TODO: read through strings by shifting pointer, instead of using array index
// figure out a way to dispatch length functions
// t_format	*parse_format(const char *s, va_list ap)
// {
// 	size_t		i;
// 	t_format	*format;

// 	i = 0;
// 	// <zero out all struct members?>
// 	while (s[i])
// 	{
// 		if (s[i] == '%')
// 		{
// 			if (g_frmt_jump_table[i + 1])
// 				g_frmt_jump_table[i + 1](s, i, format);
// 			/*
// 				- compare letter <-> index char of frmt jump table
// 				- call func for found flag
// 				- called func will...
// 					- check h or hh / l or ll
// 					- populate format struct
// 					- returns populated struct
// 				- call parse_conversion(format struct)
// 			*/
// 		}
// 		else if (s[i + 1] == '%')
// 				ft_putchar('%');
// 		else
// 			write(1, &s[i], 1);
// 		i++;
// 	}
// 	return (format);
// }

// void	parse_conversion(const char *s, va_list ap, )

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> backup