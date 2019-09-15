CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
		bzero_recipe.c \
		parse.c \
		sub_specs.c \
		dispatch.c \
		int.c \
		uint.c \
		octal.c \
		hex.c \
		ftoa.c \
		float.c \
		pointer.c \
		char.c \
		string.c \
		count_int_digits.c \
		itoa_base.c \
		itoa_base_upper.c \
		libft/*.c
OBJS = ft_printf.o \
		bzero_recipe.o \
		parse.o \
		sub_specs.o \
		dispatch.o \
		int.o \
		uint.o \
		octal.o \
		hex.o \
		ftoa.o \
		float.o \
		pointer.o \
		char.o \
		string.o \
		count_int_digits.o \
		itoa_base.o \
		itoa_base_upper.o \
		ft_*.o
NAME = libftprintf.a
RM = rm -rf

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(SRCS) -I libft
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

libft/libft.a:
	make -c libft

# TODO: generate object files to dedicated directory
		# separate them to libftobj/ ftprintfobj/ ?
# TODO: check for libft changes and make them every time if necessary
# TODO: organize files to src/ includes/ ?