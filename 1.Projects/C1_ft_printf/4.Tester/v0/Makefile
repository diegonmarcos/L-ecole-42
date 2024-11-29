# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 20:44:41 by dinepomu          #+#    #+#              #
#    Updated: 2024/11/29 20:52:32 by dinepomu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

MAIN_SRC = $(wildcard *.c)
MAIN_OBJ = $(MAIN_SRC:.c=.o)

NAME = libft.a
LIB_SRC = $(wildcard libft/*.c)
LIB_OBJ = $(LIB_SRC:.c=.o)

# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
DEBBUG = -g -O1 
DEBBUG1 = -g3 -fsanitize=address -fsanitize=undefined -O1
DEBBUG2 = -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-inline -fno-inline-functions -fno-default-inline
AR = ar rcs
EXEC = a.out

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #

all: $(NAME) $(EXEC)

$(NAME): $(LIB_OBJ)
	$(AR) $(NAME) $(LIB_OBJ)

$(EXEC): $(NAME) $(MAIN_OBJ)
	$(CC) $(MAIN_OBJ) $(NAME) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

dbg: $(NAME) $(MAIN_OBJ)
		$(CC) $(MAIN_OBJ) $(NAME) -o $(EXEC) $(DEBBUG)

dbg1: $(NAME) $(MAIN_OBJ)
		$(CC) $(MAIN_OBJ) $(NAME) -o $(EXEC) $(DEBBUG1)		

clean:
	rm -f $(LIB_OBJ) $(MAIN_OBJ)

fclean: clean
	rm -f $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean re