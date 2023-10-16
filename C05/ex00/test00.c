#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	i = 1;
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}

int	main(void)
{
	int	nb;
	int	fact;

	nb = 0;
	fact = ft_iterative_factorial(nb);
	printf("%d", fact);
}
