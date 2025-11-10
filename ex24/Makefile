NAME = libft.a
CC = gcc
INCLUDE = -Iincludes/
AR = ar rcs
SRC = srcs/ft_putchr.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_swap.c srcs/ft_strlen.c
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o : %.c 
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re