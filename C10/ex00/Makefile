#My Makefile for C10 ex00

#Compilers
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Files
SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)

#Executable
NAME = ft_display_file

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
