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
# define CONVERSIONS	"cspdiouxXf%"
# define SUBSPEC		"#0-+ *.0123456789lL"
# define FLAGS			"#0-+ "
# define LENGTH			"hlL"
# define ALLSYMBOLS		"cspdiouxXf%#0-+ *.0123456789hlL"
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

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< float struct
typedef struct			s_float
{
	long double			n;
	long double			int_ld;
	char				*int_s;
	int					intlen;
	long double			frac_ld;
	char				*frac_s;
	int					precision;
	int					append;
	int					zeros;
	int					dot;
	int					npad;
	char				sign;
	int					hassign;
	char				padc;
}						t_float;
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> float struct

// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< prototypes
int			ft_printf(const char *format, ...);
size_t		count_int_digits(intmax_t n);
void		sub_specs(const char* format, t_format *recipe, va_list ap);
void		dispatch(char c, t_format *recipe, va_list ap);
void		bzero_recipe(t_format *recipe);
void		re_bzero_recipe(t_format *recipe);
ssize_t		parse(const char *format, t_format *recipe, va_list ap);
char		*itoa_base(uintmax_t n, uintmax_t base);
char		*uitoa_base(uintmax_t n, uintmax_t base);
char		*itoa_base_upper(intmax_t n, uintmax_t base);
void		print_int(t_format *recipe, va_list ap);
void		print_uint(t_format *recipe, va_list ap);
void		print_char(t_format *recipe, va_list ap);
void		print_string(t_format *recipe, va_list ap);
void		print_octal(t_format *recipe, va_list ap);
void		print_hex(const char x, t_format *recipe, va_list ap);
void		print_pointer(t_format *recipe, va_list ap);
void		print_percent(t_format *recipe);
void		print_float(t_format *recipe, va_list ap);
void		format_2(t_format *recipe, t_float *fl);
void		justify(t_format *recipe, t_float *fl);
void		left_justify_float(t_format *recipe, t_float *fl);
void		right_justify_float(t_format *recipe, t_float *fl);
void		sign_and_width(t_format *recipe, t_float *fl);

long double	power(intmax_t base, intmax_t exponent);

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> prototypes

#endif
