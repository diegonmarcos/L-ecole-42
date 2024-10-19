SCRS = srcs/main.c srcs/converter_utils.c srcs/converter.c srcs/dict_line_parser.c srcs/dict_parser.c srcs/file_parser.c srcs/file_utils.c srcs/string_utils.c

OBJS = ${SCRS:.c=.o}

NAME = rush-02

CC = gcc -Wall -Wextra -Werror -I includes

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean