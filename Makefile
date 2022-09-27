NAME = push_swap

SRC =	push.c\
			rotate.c\
			reverse_rotate.c\
			swap.c\
			lst_utils.c\
			small_sort.c\
			main.c\
			parse.c \
			free.c\
			limits.c\
			sorted.c\
			index.c\
			radix.c\
			split.c\

OBJECTS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g -fsanitize=address

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all