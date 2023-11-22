#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define TRUE 1
#define FALSE 0

char	*ft_strcpy(char *dest, char *src, int count, int len_word)
{
	int	i;

	i = 0;
	while (i < len_word)
	{
		dest[i] = src[count];
		count++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_is_separator(char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (charset[j] != '\0')
	{
		if (str[i] == charset[j])
			return (TRUE);
		j++;
	}
	return (FALSE);
}

int	ft_count_words(char *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (ft_is_separator(str, charset, i) == FALSE && str[i] != '\0')
		count = 1;
	while (str[i] != '\0')
	{
		if (ft_is_separator(str, charset, i) == TRUE)
		{
			while (ft_is_separator(str, charset, i) == TRUE)
				i++;
			if (str[i] != '\0')
				count++;
		}
		i++;
	}
	return (count);
}

int	ft_len_words(int i, char *str, char *charset)
{
	int	len_word;
	int	row;
	int	break_loop;

	row = 0;
	len_word = 0;
	break_loop = FALSE;
	while (str[i] != '\0' && break_loop == FALSE)
	{
		if (ft_is_separator(str, charset, i) == TRUE)
		{
			break_loop = TRUE;
		}
		else
		{
			len_word++;
			i++;
		}
	}
	return (len_word);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**array;
	int		row;
	int		i;
	int		len_word;

	count = ft_count_words(str, charset);
	array = (char **) malloc ((count + 1) * sizeof(char *));
	array[count] = 0;
	i = 0;
	row = 0;
	while (ft_is_separator(str, charset, i) == TRUE && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		len_word = ft_len_words(i, str, charset);
		array[row] = (char *) malloc ((len_word + 1) * sizeof(char));
		ft_strcpy(array[row], str, i, len_word);
		i = len_word + i;
		while (ft_is_separator(str, charset, i) == TRUE && str[i] != '\0')
			i++;
		row++;
	}
	return (array);
}

int	main(void)
{
	int	i;

	char charset[] = ".,;";
	char str[] = "hola.soy,farah;muy,.buenas.;.1";
	char	**result;
	result = ft_split(str, charset);
	i = 0;
	while (result[i] != 0)
	{
		printf("%s\n", result[i]);
		i++;
	}
}
