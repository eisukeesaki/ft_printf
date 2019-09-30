CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
		re_init_fmt.c \
		parse.c \
		find_sub_specifiers.c \
		dispatch.c \
		int.c \
		uint.c \
		octal.c \
		hex.c \
		float.c \
		float_2.c \
		percent.c \
		pointer.c \
		char.c \
		string.c \
		count_int_digits.c \
		itoa_base.c \
		itoa_base_upper.c \
		power.c
OBJS = ft_printf.o \
		re_init_fmt.o \
		parse.o \
		find_sub_specifiers.o \
		dispatch.o \
		int.o \
		uint.o \
		octal.o \
		hex.o \
		float.o \
		float_2.o \
		percent.o \
		pointer.o \
		char.o \
		string.o \
		count_int_digits.o \
		itoa_base.o \
		itoa_base_upper.o \
		power.o
NAME = libftprintf.a
RM = rm -f

$(NAME): $(OBJS)
	make -C libft
	@echo ">copying libft archive to project root as libftprintf.a"
	cp libft/libft.a ./$(NAME)
	@echo ">creating ft_printf archive"
	ar rcs $(NAME) $(OBJS)
	@echo ">generating index to ft_printf archive"
	ranlib $(NAME)

$(OBJS):
	@echo ">compiling ft_printf without linking"
	$(CC) $(CFLAGS) -c $(SRCS)

all: $(NAME)

clean:
	make clean -C libft
	@echo ">deleting ft_printf object files"
	$(RM) $(OBJS)

fclean:
	make fclean -C libft
	@echo ">deleting ft_printf object files"
	$(RM) $(OBJS)
	@echo ">deleting ft_printf archive"
	$(RM) $(NAME)

re: fclean all
