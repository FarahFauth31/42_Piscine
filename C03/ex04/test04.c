#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_find;
	int	count_str1;
	int	count_str2;

	if (*to_find == '\0')
		return (str);
	count_str1 = 0;
	while (str[count_str1] != '\0')
	{
		count_str2 = count_str1;
		counter_find = 0;
		if (to_find[counter_find] == str[count_str2])
		{
			while (to_find[counter_find] == str[count_str2]
				&& to_find[counter_find] != '\0')
			{
				if (to_find[counter_find + 1] == '\0')
					return (&str[count_str1]);
				counter_find++;
				count_str2++;
			}
		}
		count_str1++;
	}
	return (NULL);
}

int	main(void)
{
	char	*ptr;

	char s1[] = "Yo siempre tengo ququiero siempre";
	char s2[] = "qui";
	char s3[] = "Yo siempre tengo ququiero siempre";
	char s4[] = "qui";
	ptr = ft_strstr(s1, s2);
	printf("%s\n", ptr);
	ptr = strstr(s3, s4);
	printf("%s\n", ptr);
}
