# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 18:47:35 by dinepomu          #+#    #+#              #
#    Updated: 2024/12/03 15:09:44 by dinepomu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
WHITE =			\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_num_unsign.c ft_pointer_hexa.c \
				ft_putstr.c ft_strlen.c ft_hexa_minusc.c ft_hexa_mayusc.c

INCLUDE = ft_printf.h

CC = gcc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${INCLUDE}
			@echo "${BLUE} > $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
			@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
		@${AR} ${NAME} ${OBJS}
		@echo "\n$(GREEN) Created Objects: *.o ✓ $(DEF_COLOR)"
		@echo "$(GREEN) Created Executable: $(NAME) ✓ $(DEF_COLOR)\n"

clean:
		@${RM} ${OBJS}
		@echo "\n${BLUE} --- $(RED)Objects deleted  ${BLUE}---$(DEF_COLOR)\n"

fclean:
		@${RM} ${OBJS}
		@${RM} ${NAME}
		@echo "\n${BLUE} --- $(RED)Objects and executable deleted ${BLUE} ---$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
