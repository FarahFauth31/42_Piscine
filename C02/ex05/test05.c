#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;
	int	y;

	y = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] > 'Z' || str[count] < 'A'))
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

	char src[] = "ADC5hEFV";
	n = ft_str_is_uppercase(src);
	printf("%d\n", n);
}
