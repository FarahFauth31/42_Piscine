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

int	main(void)
{
	char	str[12] = "StringHello";
	char	*ptr = str;

	ft_putstr(ptr);
}
