CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
		bzero_recipe.c \
		parse.c \
		sub_specs.c \
		dispatch.c \
		int.c \
		count_int_digits.c \
		itoa_base.c \
		libft/*.c
OBJS = ft_printf.o \
		bzero_recipe.o \
		parse.o \
		sub_specs.o \
		dispatch.o \
		int.o \
		count_int_digits.o \
		itoa_base.o \
		ft_*.o
NAME = libftprintf.a
RM = rm -rf

$(NAME):
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
