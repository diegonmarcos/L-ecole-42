# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelona.co  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 15:28:09 by meghribe          #+#    #+#              #
#    Updated: 2024/08/04 01:39:06 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#==========> VARIABLES 
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)

AR = ar rcs
RM = rm -rf

NAME = libftprintf.a

SRCS_DIR = src
OBJS_DIR = obj
HEADER_DIR = include
LIBFT_MAKEFILE = $(LIBFT_DIR)/Makefile

SRCS = $(SRCS_DIR)/ft_printf.c \
       $(SRCS_DIR)/ft_printf_utils.c

OBJS = $(OBJS_DIR)/ft_printf.o \
       $(OBJS_DIR)/ft_printf_utils.o

HEADER = $(HEADER_DIR)/ft_printf.h

#==========> RULES 
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	@echo "Library $(NAME) created successfully!"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c $(HEADER) Makefile | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

clean:
	$(RM) $(OBJS_DIR)
	@echo "Object files removed!"

fclean: clean
	$(RM) $(NAME)
	@echo "Library $(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re
