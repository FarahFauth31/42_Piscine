#!/bin/sh

# Compilar los archivos en archivos objeto
gcc -Wall -Wextra -Werror -c ft_putchar.c
gcc -Wall -Wextra -Werror -c ft_putstr.c
gcc -Wall -Wextra -Werror -c ft_strcmp.c
gcc -Wall -Wextra -Werror -c ft_strlen.c
gcc -Wall -Wextra -Werror -c ft_swap.c

# Crear biblioteca estática libft.a con los archivos objeto
# (r: reemplazar, c: crear)
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

# Poner índices a la librería para que sea más eficiente la búsqueda
ranlib libft.a

# Borrar archivos objeto
rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o