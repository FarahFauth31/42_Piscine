#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str = (str + 1);
	}
	return (count);
}

int	main(void)
{
	int	c;
	char	str[7] = "String";
	char	*ptr = str;

	//write(1, ptr, 7);
	c = ft_strlen(ptr);
	printf("%d", c);
	//printf("%d", nb);
	//nnum = nnum + 48;
	//write(1, &c, 1);
}