cat Makefile

NAME = Rush-02

CC = cc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SRC = (*.c)

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
$(NAME)

clean:
$(RM) $(OBJS)

fclean: clean
$(RM) $(NAME)

re: fclean all
.PHONY = clean fclean all re