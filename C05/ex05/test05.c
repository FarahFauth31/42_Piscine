#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	i = 3;
	while (i * i < nb && i < 46341 && i < nb / 3)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = 40000;
	result = ft_sqrt(nb);
	printf("%d", result);
}