#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = (str + 1);
	}
}

int	main(int argc, char *argv[])
{
	char	*ptr = argv[1];

	ft_putstr(ptr);
}
