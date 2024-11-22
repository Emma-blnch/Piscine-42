NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

SRCS = srcs/ft_putchar.c \
       srcs/ft_swap.c \
       srcs/ft_putstr.c \
       srcs/ft_strlen.c \
       srcs/ft_strcmp.c

INC_DIR = includes

HEADS = $(INC_DIR)/ft.h

OBJS = $(SRCS:.c=.o)

AR = ar -rc

LIB = ranlib

all: $(NAME)

.c.o: $(CC) $(CFLAGS) -c $< -o $(OBJS)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)
		$(LIB) $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
