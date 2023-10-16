#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char dest[] = "PO";
	char src[] = "abcde";
	printf("%s", dest);
	ft_strcpy(dest, src);
	printf("%s", dest);
}
