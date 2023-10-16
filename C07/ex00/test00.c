#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		count;

	len = ft_strlen(src);
	ptr = (char *) malloc (len * sizeof(char));
	if (!ptr)
		return (NULL);
	count = 0;
	while (src[count] != '\0')
	{
		ptr[count] = src[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}

int main (void)
{
	char *ptr;
	char src[] = "hola";

	ptr = ft_strdup(src);
	while (*ptr != '\0')
	{
		write(1, ptr, 1);
		ptr = (ptr + 1);
	}
}