# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/24 16:12:48 by alejhern          #+#    #+#              #
#    Updated: 2024/06/30 18:26:20 by alejhern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

SRCS	=	ft_atoi.c			\
			ft_bzero.c			\
			ft_calloc.c			\
			ft_isalnum.c		\
			ft_isalpha.c		\
			ft_isascii.c		\
			ft_isdigit.c		\
			ft_isprint.c		\
			ft_itoa.c			\
			ft_memchr.c			\
			ft_memcmp.c			\
			ft_memcpy.c			\
			ft_memmove.c		\
			ft_memset.c			\
			ft_putchar_fd.c		\
			ft_putendl_fd.c		\
			ft_putnbr_fd.c		\
			ft_putstr_fd.c		\
			ft_strchr.c			\
			ft_strdup.c			\
			ft_striteri.c		\
			ft_strjoin.c		\
			ft_strlcat.c		\
			ft_strlcpy.c		\
			ft_strlen.c			\
			ft_strmapi.c		\
			ft_strncmp.c		\
			ft_strnstr.c		\
			ft_strrchr.c		\
			ft_split.c			\
			ft_strtrim.c		\
			ft_substr.c			\
			ft_tolower.c		\
			ft_toupper.c

SRCS_B	=	ft_lstadd_back_bonus.c		\
		 	ft_lstadd_front_bonus.c		\
		 	ft_lstclear_bonus.c			\
		 	ft_lstdelone_bonus.c		\
		 	ft_lstiter_bonus.c			\
		 	ft_lstlast_bonus.c			\
		 	ft_lstmap_bonus.c			\
		 	ft_lstnew_bonus.c			\
		 	ft_lstsize_bonus.c

OBJS	=	${SRCS:.c=.o}
OBJS_B	=	${SRCS_B:.c=.o}
DEPS	=	${SRCS:.c=.d} ${SRCS_B:.c=.d}

# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #

#Nombre del Programa
NAME		=	libft.a

#Flags de compilacion
FLAGS		=	-Wall -Werror -Wextra -I.
DEPFLAGS	=	-MMD -MP

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #

all:	${NAME}

%.o: %.c
	@echo "(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Compilando $<, espere unos segundos..."
	cc ${FLAGS} ${DEPFLAGS} -c -o $@ $<
	@echo "(•̀ᴗ•́)و $@ generado!"

$(NAME):	${OBJS}
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Creando libreria, espere unos segundos..."
	ar -rcs ${NAME} ${OBJS}
	@echo	"(•̀ᴗ•́)و ${NAME} generado!"

bonus:		${OBJS_B}
	@echo	"(ﾉ◕ヮ◕)ﾉ*:・ﾟ✧ Creando libreria bonus, espere unos segundos..."
	ar -rcs ${NAME} ${OBJS_B}
	@echo	"(•̀ᴗ•́)و ${NAME} generado!"

clean:
	rm -f ${OBJS} ${OBJS_B} ${DEPS}
	@echo	"¯\_(ツ)_/¯ Objects removidos!"

fclean:		clean
	rm -f ${NAME}
	@echo	"(╯°□°）╯︵ ┻━┻ $(NAME) removido!"

re: fclean all

.PHONY: all clean fclean re bonus
