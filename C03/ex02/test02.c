#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	count1;
	int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
	{
		count1++;
	}
	while (src[count2] != '\0')
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
	char s1[] = "This is ";
	char s2[6] = "a dog";
	char s3[100] = "This is ";
	char s4[6] = "a dog";

	ft_strcat(s1, s2);
	printf("%s\n", s1);
	strcat(s3, s4);
	printf("%s\n", s3);
}
