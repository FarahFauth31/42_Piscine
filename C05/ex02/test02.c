#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	number;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	i = 1;
	number = 1;
	while (i <= power)
	{
		number = number * nb;
		i++;
	}
	return (number);
}

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 10;
	power = 2;
	result = ft_iterative_power(nb, power);
	printf("%d", result);
}
