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

	if (!format[0])
		return (0);
	
	if (format_len == 1 && format[0] == '%')
		return (0);
	else
		printed_bytes = parse(format, recipe, ap);

	va_end(ap);

	free(recipe);

	return (printed_bytes);
}
