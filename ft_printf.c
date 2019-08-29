// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test purpose
#include <stdio.h>
#include <limits.h>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> test purpose
#include "libft/libft.h"
#include "ft_printf.h"

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

	recipe->format = (char *)format;

	va_start(ap, format);

	printed_bytes = parse(format, recipe, ap);

	// parse_conversion(format, ap, parse_format(format, ap));

	va_end(ap);

	return (printed_bytes);
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
