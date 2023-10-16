#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_len(char *str, int count)
{
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	len2;
	unsigned int	count;

	count = 0;
	len = ft_len(dest, 0);
	len2 = ft_len(src, 0);
	if (len < size)
	{
		while (src[count] != '\0' && count < (size - len -1))
		{
			dest[count + len] = src[count];
			count++;
		}
		dest[count + len] = '\0';
		return (len + len2);
	}
	else
	{
		return (len2 + size);
	}
}

int	main(void)
{
	char s1[20] = "This is ";
	char s2[] = "a dedededededededededed";
	char s3[20] = "This is ";
	char s4[4] = "a d";
    int n;
	unsigned int l;

    n = 20;
	l = ft_strlcat(s1, s2, n);
	printf("%d\n", l);
	printf("%s\n", s1);
	l = strlcat(s3, s4, n);
	printf("%d\n", l);
	printf("%s\n", s3);
}
