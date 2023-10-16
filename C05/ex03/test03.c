#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	number;

	if (power < 0)
	{
		return (0);
	}
	number = 1;
	if (power > 0)
	{
		number = ft_recursive_power(nb, power - 1) * nb;
	}
	return (number);
}

int	main(void)
{
	int	nb;
	int	power;
	int	result;

	nb = 10;
	power = 4;
	result = ft_recursive_power(nb, power);
	printf("%d", result);
}
