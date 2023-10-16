#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = 4;
	result = ft_is_prime(nb);
	printf("%d", result);
}
