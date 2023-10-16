#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	count;
	int	y;

	y = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 32 || str[count] > 126))
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

	char src[] = "asld  hf";
	n = ft_str_is_printable(src);
	printf("%d\n", n);
}
