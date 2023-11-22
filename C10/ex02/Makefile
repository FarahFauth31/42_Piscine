#My Makefile for C10 ex01

#Compilers
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Files
SRCS = ft_input_errors.c ft_ten_lines.c ft_common_functions.c ft_tail.c ft_num_bytes.c
OBJS = $(SRCS:.c=.o)

#Executable
NAME = ft_tail

#Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re