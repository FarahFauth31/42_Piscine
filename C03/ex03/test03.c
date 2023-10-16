#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0' && count2 < nb)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}

int	main(void)
{
	char s1[100] = "This is ";
	char s2[] = "a very";
	char s3[100] = "This is ";
	char s4[] = "a very";
    unsigned int n;

    n = 10;

	ft_strncat(s1, s2, n);
	printf("%s\n", s1);
	strncat(s3, s4, n);
	printf("%s\n", s3);
}
