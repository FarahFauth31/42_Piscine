#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z'))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}

int	main(void)
{
	char src[] = "ABCDEFG";
	ft_strlowcase(src);
	printf("%s\n", src);
}
