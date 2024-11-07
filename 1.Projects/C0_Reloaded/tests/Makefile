# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 13:22:48 by dinepomu          #+#    #+#              #
#    Updated: 2024/11/07 17:38:38 by dinepomu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tester.a
SRCS_MAND = \	
#source files
../src/*/*/*.c \
#				$(shell find ../src -name "*.c")\

OBJS_MAND = ${SRCS_MAND:.c=.o}
CC = cc
RM = rm -rf
AR = ar rcs
RANLIB = ranlib 
CFLAGS = -Wall -Wextra -Werror

# Default target
all: $(NAME)

# Link object files into the archive
$(NAME):	$(OBJS_MAND)
	$(AR) $(NAME) $(OBJS_MAND)
	$(RANLIB) $(NAME)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS_MAND)

# Remove object files and the archive
fclean: clean
	rm -f $(NAME)

# Rebuild the project
re: fclean all

# Declare targets that are not associated with files
.PHONY: all clean fclean re
