#include "ft_stock_str.h"
#include <stdio.h>
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

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = (t_stock_str *) malloc ((ac + 1) * sizeof(t_stock_str));
	if (!tab)
	{
		free(tab);
		tab = NULL;
		return (tab);
	}
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = av[i];
		i++;
	}
	tab[i].size = 1;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

int	main(void)
{
	int				ac;
	char			**av;
	t_stock_str		*tab;
	int				i;

	av[0] = "hola";
	av[1] = "pablo";
	av[2] = "guapo";
	ac = 3;
	tab = ft_strs_to_tab(ac, av);
	i = 0;
	while (i <= ac)
	{
		printf("%d\n", tab[i].size);
		printf("%s\n", tab[i].str);
		printf("%s\n", tab[i].copy);
		i++;
	}
}