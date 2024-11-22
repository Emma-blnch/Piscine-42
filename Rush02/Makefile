NAME = rush-02

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

SRCS = src/main.c src/ft_strlen.c src/read_file.c src/extract_pair.c src/convert_numbers.c src/ft_atoi.c src/convert_numbers_diff.c

INC_DIR = include

DEPS = $(INC_DIR)/ft.h

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all
