#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< headers
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< headers

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< length modifiers
# define H				1
# define HH				2
# define L				3
# define LL				4
# define UPRL			5
# define POSITIVE		8
# define NEGATIVE		9
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> length modifiers

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< symbol lists
# define CONVERSIONS	"cspdiouxX%"
# define SUBSPEC		"#0-+ *.0123456789lL"
# define FLAGS			"#0-+ "
# define LENGTH			"hlL"
# define ALLSYMBOLS		"cspdiouxX%#0-+ *.0123456789hlL"
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> symbol lists

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< recipe
typedef struct			s_format
{
	char				*format;

	ssize_t				nprinted;

	size_t				i;
	size_t				len;

	int					hash;
	int					zero;
	int					minus;
	int					plus;
	int					space;

	int					width;
	int					hasprecision;
	int					precision;
	int					length;
}						t_format;
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> recipe

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< prototypes
int			ft_printf(const char *format, ...);
size_t		count_int_digits(intmax_t n);
void		sub_specs(const char* format, t_format *recipe, va_list ap);
void		dispatch(char c, t_format *recipe, va_list ap);
void		bzero_recipe(t_format *recipe);
ssize_t		parse(const char *format, t_format *recipe, va_list ap);
char		*itoa_base(intmax_t n, uintmax_t base);
void		print_int(t_format *recipe, va_list ap);
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> prototypes

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< conversion
// void					conversion_d(va_list ap, t_format format);
// void					conversion_c(va_list ap, t_format format);
// void					conversion_s(va_list ap, t_format format);
// void					conversion_f(va_list ap, t_format format);
// void					conversion_u(va_list ap, t_format format);
// void					conversion_o(va_list ap, t_format format);
// void					conversion_X(va_list ap, t_format format);
// void					conversion_x(va_list ap, t_format format);
// void					conversion_p(va_list ap, t_format format);
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> conversion

// void					length_h(const char *s, size_t i, t_format format);
// void					length_l(const char *s, size_t i, t_format format);

// typedef void			printer(va_list); // print functions' prototype
// typedef void			formatter(const char *, size_t, t_format);

#endif
