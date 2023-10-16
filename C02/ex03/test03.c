#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	count;
	int	y;

	y = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < '0' || str[count] > '9'))
		{
			y = 0;
		}
		count++;
	}
	return (y);
}

int	main(void)
{
	int	n;

	char src[] = "7777 ";
	n = ft_str_is_numeric(src);
	printf("%d\n", n);
}
