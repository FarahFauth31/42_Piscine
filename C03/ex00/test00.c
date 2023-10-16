#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	if ((s1[count] != '\0' && s2[count] == '\0') || (s2[count] != '\0'
			&& s1[count] == '\0'))
		return (s1[count] - s2[count]);
	return (0);
}

int	main(void)
{
	int	i;

	char s1[] = "";
	char s2[] = "";
	i = ft_strcmp(s1, s2);
	printf("%d\n", i);
	i = strcmp(s1, s2);
	printf("%d\n", i);
}
