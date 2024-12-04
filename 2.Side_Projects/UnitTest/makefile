# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 18:47:35 by dinepomu          #+#    #+#              #
#    Updated: 2024/12/04 14:07:00 by dinepomu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# **************************************************************************** #
#                                COLLORS                                   	   #
# **************************************************************************** #

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

# **************************************************************************** #
#                                DIRECTORIES                                   #
# **************************************************************************** #

## Library
LIB_NAME = lib_name
LIB_DIR = lib
LIB = $(LIB_DIR)/$(LIB_NAME).a
LIBS = $(wildcard $(LIB_DIR)/*.a)

LIB_SRC_DIR = $(LIB_DIR)/src_lib
LIB_OBJ_DIR = $(LIB_DIR)/obj_lib
LIB_SRC = $(wildcard $(LIB_SRC_DIR)/*.c)
LIB_OBJ = $(patsubst $(LIB_SRC_DIR)/%.c,$(LIB_OBJ_DIR)/%.o,$(LIB_SRC))

## Executable
NAME = a.out
BIN_DIR = bin
EXEC = $(BIN_DIR)/$(NAME)

MAIN_SRC_DIR = src_tester
MAIN_OBJ_DIR = obj
MAIN_SRC = $(wildcard $(MAIN_SRC_DIR)/*.c)
MAIN_OBJ = $(patsubst $(MAIN_SRC_DIR)/%.c,$(MAIN_OBJ_DIR)/%.o,$(MAIN_SRC))


# **************************************************************************** #
#                                 VARIABLES                                    #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
DEBUG = -g -fsanitize=address

# **************************************************************************** #
#                                 RULES                                        #
# **************************************************************************** #

all: $(NAME)

$(NAME):	lib main run

#pause:
#	@sleep 3

lib: $(LIB)

$(LIB_OBJ_DIR)/%.o:	$(LIB_SRC_DIR)/%.c
					@mkdir -p $(LIB_OBJ_DIR)
					@echo "${BLUE} > $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
					@$(CC) $(CFLAGS) -c $< -o $@

$(LIB):	$(LIB_OBJ)
		@echo "\n$(GREEN) Created Objects: *.o ✓ $(DEF_COLOR)"
		@$(AR) $(LIB) $(LIB_OBJ)
		@echo "$(GREEN) Created Executable: $(LIB) ✓ $(DEF_COLOR)\n"

main: $(EXEC)

$(MAIN_OBJ_DIR)/%.o:	$(MAIN_SRC_DIR)/%.c
						@mkdir -p $(MAIN_OBJ_DIR)
						@echo "${BLUE} > $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
						@$(CC) $(CFLAGS) -c $< -o $@

$(EXEC):	$(MAIN_OBJ) $(LIBS)
			@mkdir -p $(BIN_DIR)
			@echo "\n$(GREEN) Created Objects: *.o ✓ $(DEF_COLOR)"
			@$(CC) $(CFLAGS) $(MAIN_OBJ) $(LIBS) -o $(EXEC)
			@echo "$(GREEN) Created Executable: $(EXEC) ✓ $(DEF_COLOR)\n"

run:
		@./$(EXEC)

dbg:	$(MAIN_OBJ) $(NAME)
		@mkdir -p $(MAIN_OBJ_DIR)
		@mkdir -p $(BIN_DIR)
		$(CC) $(CFLAGS) $(DEBUG) $(MAIN_OBJ) $(NAME) -o $(EXEC) 

clean:
		@rm -rf $(LIB_OBJ_DIR) $(MAIN_OBJ_DIR)
		@echo "\n${BLUE} --- $(RED)Objects deleted  ${BLUE}---$(DEF_COLOR)\n"

fclean:	clean
		@rm -f $(LIB) $(EXEC)
		@rm -rf $(BIN_DIR)
		@echo "\n${BLUE} --- $(RED)Objects and executable deleted ${BLUE} ---$(DEF_COLOR)\n"

re:	fclean all

.PHONY: all lib main clean fclean re dbg