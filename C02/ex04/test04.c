#include <stdio.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	count;
	int	y;

	y = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] > 'z' || str[count] < 'a'))
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

	char src[] = "jfghhfdbfv";
	n = ft_str_is_lowercase(src);
	printf("%d\n", n);
}
