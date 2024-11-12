``` bash
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dnepomuc <dnepomuc@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 19:43:58 by dnepomuc           #+#    #+#              #
#    Updated: 2024/07/22 18:05:13 by dnepomuc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #
SRCS_MAND = 	ft_memset.c		\
		  		ft_memmove.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_memcpy.c		\
		  		ft_bzero.c		\
		  		ft_atoi.c		\
		  		ft_strlen.c		\
		  		ft_strlcpy.c	\
		  		ft_strlcat.c	\
		 	 	ft_strchr.c		\
		 		ft_strrchr.c	\
		  		ft_strnstr.c	\
				ft_strncmp.c	\
		  		ft_isalnum.c	\
		  		ft_isdigit.c	\
		  		ft_isalpha.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_tolower.c	\
		  		ft_toupper.c	\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				ft_itoa.c		\
				ft_substr.c		\
				ft_strjoin.c	\
				ft_strtrim.c	\
				ft_split.c		\
				ft_strmapi.c	\
				ft_putchar_fd.c	\
				ft_putstr_fd.c	\
				ft_putendl_fd.c	\
				ft_putnbr_fd.c	\
				ft_striteri.c	\

OBJS_MAND = ${SRCS_MAND:.c=.o}
SRC_BONUS = ft_lstnew.c 		\
			ft_lstadd_front.c 	\
			ft_lstsize.c 		\
			ft_lstlast.c 		\
			ft_lstadd_back.c 	\
			ft_lstdelone.c 		\
			ft_lstclear.c 		\
			ft_lstiter.c 		\
			ft_lstmap.c			\

OBJS_BONUS = ${SRC_BONUS:.c=.o}

# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #
NAME = libft.a
CC = gcc
RM = rm -rf
AR = ar rcs
RANLIB = ranlib
CFLAGS = -Wall -Wextra -Werror

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #
all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "(•̀ᴗ•́)و $@ OBJECTS GENERATED!"

$(NAME):	$(OBJS_MAND)
			$(AR) $(NAME) $(OBJS_MAND)
			$(RANLIB) $(NAME)
			@echo	"	(•̀ᴗ•́)و FILE GENERATED!"

clean:
	$(RM) $(OBJS_MAND) $(OBJS_BONUS)
	@echo	"	¯\_(ツ)_/¯ OBJECTS REMOVED!"

fclean:	clean
		rm -f $(NAME)
		@echo	"	(╯°□°）╯︵ ┻━┻ FILE REMOVED!"

re: fclean all

bonus:	$(NAME) $(OBJS_BONUS)
		$(AR) $(NAME) $(OBJS_BONUS)
		$(RANLIB) $(NAME)
		@echo	"	(•̀ᴗ•́)و BONUS GENERATED!"

.PHONY: all clean fclean re bonus
```

