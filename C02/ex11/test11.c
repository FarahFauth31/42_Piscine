#include <unistd.h>
#include <stdio.h>

int	ft_putstr(char *str, int position)
{
	while (str[position] != '\0')
	{
        if (str[position] < 32 || str[position] > 126)
            return (position);
        write(1, &str[position], 1);
        position++;
	}
    return (position);
}

void	ft_rec(char non_print, int len, char *base)
{
	int	rest;
	int	num_base;

	if (non_print > 0)
	{
		ft_rec(non_print / len, len, base);
	}
	rest = (non_print % len);
	num_base = base[rest];
	write(1, &num_base, 1);
	return ;
}

void ft_putstr_non_printable(char *str)
{
    int len;
    char hexa[17] = "0123456789abcdef";
    int position;

    position = 0;
    len = 16;
    position = ft_putstr(str, position);
    write(1, "\\", 1);
    ft_rec(str[position], len, hexa);
    position++;
    position = ft_putstr(str, position);
}

int main(void)
{
    ft_putstr_non_printable("Coucou\atu vas bien ?");
}