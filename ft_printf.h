/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 05:48:53 by eesaki            #+#    #+#             */
/*   Updated: 2019/09/30 04:51:21 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*
**-----------------------------------------------------------------------------
**									headers
**-----------------------------------------------------------------------------
*/
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

/*
**-----------------------------------------------------------------------------
**									length modifiers
**-----------------------------------------------------------------------------
*/
# define H				1
# define HH				2
# define L				3
# define LL				4
# define UPPER_L		5
# define POSITIVE		8
# define NEGATIVE		9

/*
**-----------------------------------------------------------------------------
**									symbol lists
**-----------------------------------------------------------------------------
*/
# define CONVERSIONS	"csdiuoxXpf%"
# define SUBSPEC		"#0-+ *.0123456789lL"
# define FLAGS			"#0-+ "
# define LENGTH			"hlL"
# define ALLSYMBOLS		"csdiuoxXpf%#0-+ *.0123456789hlL"

/*
**-----------------------------------------------------------------------------
**									fmt
**-----------------------------------------------------------------------------
*/
typedef struct			s_format
{
	char				*format;
	ssize_t				nprinted;
	size_t				i;

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

/*
**-----------------------------------------------------------------------------
**									float struct
**-----------------------------------------------------------------------------
*/
typedef struct			s_float
{
	long double			n;
	long double			int_ld;
	char				*int_s;
	int					intlen;
	long double			frac_ld;
	char				*frac_s;

	int					hassign;
	char				sign;
	int					precision;
	int					pad;
	char				pad_char;
	int					zeros;
	int					dot;
}						t_float;

/*
**-----------------------------------------------------------------------------
**									prototypes
**-----------------------------------------------------------------------------
*/
int						ft_printf(const char *format, ...);
void					re_init_fmt(t_format *fmt);
ssize_t					parse(const char *format,
										t_format *fmt, va_list ap, size_t i);
void					find_sub_specifiers(const char *format,
													t_format *fmt, va_list ap);
void					dispatch(char c, t_format *fmt, va_list ap);

void					print_char(t_format *fmt, va_list ap);
void					print_string(t_format *fmt, va_list ap);
void					print_int(t_format *fmt, va_list ap, int sign,
																intmax_t n);
void					print_uint(t_format *fmt, va_list ap);
void					print_octal(t_format *fmt, va_list ap);
void					print_hex(const char x, t_format *fmt, va_list ap);
void					print_pointer(t_format *fmt, va_list ap);
void					print_float(t_format *fmt, va_list ap);
void					print_percent(t_format *fmt);

int						count_int_digits(intmax_t n);
long double				power(int base, intmax_t exponent);
void					format_2(t_format *fmt, t_float *fl);
void					justify(t_format *fmt, t_float *fl);
void					right_justify_float(t_format *fmt, t_float *fl);
void					sign_and_width(t_format *fmt, t_float *fl);
void					left_justify_float(t_format *fmt, t_float *fl);

char					*itoa_base(intmax_t n, int base);
char					*itoa_base_upper(intmax_t n, int base);

#endif
