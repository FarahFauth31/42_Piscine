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

int	ft_find_next_prime(int nb)
{
	int	i;
	int	is_valid;

	i = 2;
	if (nb <= 2)
	{
		return (2);
	}
	is_valid = 0;
	while (is_valid == 0)
	{
		is_valid = ft_is_prime(nb);
		if (is_valid == 1)
			return (nb);
		nb++;
	}
	return (nb - 1);
}

int	main(void)
{
	int	nb;
	int	result;

	nb = 152;
	result = ft_find_next_prime(nb);
	printf("%d", result);
}