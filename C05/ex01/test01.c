#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	if (nb == 0)
	{
		return (factorial);
	}
	if (nb > 1)
	{
		factorial = ft_recursive_factorial(nb - 1);
	}
	factorial = factorial * nb;
	return (factorial);
}

int	main(void)
{
	int	nb;
	int	fact;

	nb = -4;
	fact = ft_recursive_factorial(nb);
	printf("%d", fact);
}
