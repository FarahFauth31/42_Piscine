# My Makefile for C09

# Compilers
CC = cc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I $(INC_DIR)

# Directories
SRC_DIR = srcs
INC_DIR = includes

# Files
SRCS = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJS = $(addprefix $(SRC_DIR)/, $(SRCS:.c=.o))

# File name creation
NAME = libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compiling $(NAME)..."
	@ar rcs $(NAME) $(OBJS)
	@echo "Compilation success."

# Names of rule ".c.o" or "%.o : %.c" or "$(SRC_DIR)/%.o: $(SRC_DIR)/%.c"
.c.o:
	@echo "Compiling $<..."
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o ${<:.c=.o}

clean:
	@echo "Removing temporary files..."
	@rm -f $(OBJS)

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
