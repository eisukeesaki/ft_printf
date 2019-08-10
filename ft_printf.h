#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

void			dispatch_d(va_list ap);
void			dispatch_c(va_list ap);
void			dispatch_s(va_list ap);
void			dispatch_f(va_list ap);
void			dispatch_u(va_list ap);
void			dispatch_o(va_list ap);
void			dispatch_X(va_list ap);
void			dispatch_x(va_list ap);
void			dispatch_p(va_list ap);

typedef void	printer(va_list);

typedef struct	s_format
{
	char	flags;
	int		min_field_width;
	int		precision;
	char	length;
}				t_format;

#endif
