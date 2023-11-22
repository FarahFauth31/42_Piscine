#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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

char	*ft_strdup(char *src, int strlen)
{
	int		count;
	char	*dest;

	count = 0;
	dest = (char *) malloc ((strlen + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = ft_strdup(av[i], tab[i].size);
		tab[i].copy = ft_strdup(av[i], tab[i].size);
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

int	main(int a, char **argv)
{
	int				ac;
	t_stock_str		*tab;
	int				i;

	ac = a - 1;
	argv = argv + 1;
	tab = ft_strs_to_tab(ac, argv);
	i = 0;
	for (i = 0; i <= ac; i++)
	{
		printf("%d \n", tab[i].size);
		printf("%s \n", tab[i].str);
		printf("%s \n", tab[i].copy);
	}
}
