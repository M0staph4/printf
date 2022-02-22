
CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_printf.c ft_putchar.c ft_putnbr.c \
		ft_putstr.c ft_lwhx.c ft_uphx.c ft_unint.c ft_adrs.c
all : $(NAME)
SRC_OBJECT = $(SOURCE:.c=.o)
$(NAME): $(SRC_OBJECT)
	ar -rc $(NAME) $(SRC_OBJECT)
clean: 
	rm -f $(SRC_OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all