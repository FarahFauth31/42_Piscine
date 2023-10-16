#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

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
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str = (str + 1);
	}
	write(1, "\n", 1);
}

void	ft_rec(int nb)
{
	int	rest;

	if (nb > 9)
	{
		ft_rec(nb / 10);
	}
	rest = (nb % 10) + 48;
	write(1, &rest, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_rec(nb);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}

int	main(void)
{
	int				ac;
	char			**av;
	t_stock_str		*tab;


	av[0] = "hola";
	av[1] = "pablo";
	av[2] = "guapo";
	ac = 3;
	tab = ft_strs_to_tab(ac, av);
	ft_show_tab(tab);
}