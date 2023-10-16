#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_arglen(char **strs, int size)
{
	int	count;
	int	i;
	int	ret;

	count = 0;
	ret = 0;
	while (count < size)
	{
		i = 0;
		while (strs[count][i] != '\0')
		{
			i++;
		}
		ret = ret + i;
		count++;
	}
	return (ret);
}

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

int	ft_strcpy(char *dest, char *src, int i)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	return (i);
}

void	ft_string_concat(int size, char *str_cat, char **strs, char *sep)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (count < size)
	{
		i = ft_strcpy(str_cat, strs[count], i);
		if (count != size - 1)
			i = ft_strcpy(str_cat, sep, i);
		count++;
	}
	str_cat[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		arg_len;
	int		sep_len;
	char	*str_cat;

	if (size == 0)
	{
		str_cat = (char *)malloc(0 * sizeof(char));
		return (str_cat);
	}
	arg_len = ft_arglen(strs, size);
	sep_len = ft_strlen(sep);
	str_cat = (char *)malloc(((arg_len + (sep_len * (size - 1))) + 1)
			* sizeof(char));
	if (!str_cat)
	{
		str_cat = (char *)malloc(0 * sizeof(char));
		return (str_cat);
	}
	ft_string_concat(size, str_cat, strs, sep);
	return (str_cat);
}

int	main(int a, char **argv)
{
	char	*ptr;
	char	**strs;
	int		size;
	int		i;
	char sep[] = "..";

	size = 1;
	a = 1;
	strs = (char **)malloc(size * sizeof(char *));
	i = 0;
	while (i < size)
	{
		strs[i] = argv[i + 1];
		i++;
	}
	ptr = ft_strjoin(size, strs, sep);
	/* i = 0;
	while (ptr[i] != '\0')
	{
		write(1, &ptr[i], 1);
		i++;
	} */
	printf("%s\n", ptr);
	free(ptr);
}
