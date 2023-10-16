#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	if (size == 0)
	{
		return (0);
	}
	count = 0;
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	while (src[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(void)
{
	char	dest[5];
	char	src[] = "12345klnglknfgnohonghn";
	unsigned int n;

	n = 0;
	//printf("%s", dest);
	n = ft_strlcpy(dest, src, n);
	printf("%d\n", n);
}
