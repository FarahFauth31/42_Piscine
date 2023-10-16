#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	if (count != n)
	{
		if ((s1[count] != '\0' && s2[count] == '\0') || (s2[count] != '\0'
				&& s1[count] == '\0'))
			return (s1[count] - s2[count]);
	}
	return (0);
}

int	main(void)
{
	int	i;
	int n;

	n = 5;
	char s1[] = "hola";
	char s2[] = "hola";
	i = ft_strncmp(s1, s2, n);
	printf("%d\n", i);
	i = strncmp(s1, s2, n);
	printf("%d\n", i);
}

