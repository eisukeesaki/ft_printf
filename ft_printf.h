#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

void			dispatch_d(va_list ap);
void			dispatch_c(va_list ap);
void			dispatch_s(va_list ap);
void			dispatch_f(va_list ap);
void			dispatch_u(va_list ap);

typedef void	printer(va_list);

#endif
