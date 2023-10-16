#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (*src != '\0' && count < n)
	{
		dest[count] = *src;
		src = src + 1;
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

int	main(void)
{
	char 			*d;
	char *s;
	char dest[10];
	char src[5] = "1234";
	unsigned int 	n;

	d = dest;
	s = src;
	n = 4;
	//printf("%s", dest);
	ft_strncpy(d, s, n);
	printf("%s\n", dest);
}
