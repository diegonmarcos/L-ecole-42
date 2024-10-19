# Define the name of your executable
NAME = Rush-02

# Specify the compiler
CC = gcc

# Compiler flags for warnings
CFLAGS = -Wall -Werror -Wextra

# Define the remove command
RM = rm -f

# Pattern to match all source files
SRC = $(wildcard *.c)

# Define object files based on source files (replacing .c with .o)
OBJS = $(SRC:.c=.o)

# Target to build the executable
all: $(NAME)

# Rule to build the executable from object files
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# Target to clean object files
clean:
	$(RM) $(OBJS)

# Target for full clean (executable and object files)
fclean: clean
	$(RM) $(NAME)

# Target to rebuild (full clean and then build)
re: fclean all

# Define phony targets to avoid warnings
.PHONY: clean fclean all re
