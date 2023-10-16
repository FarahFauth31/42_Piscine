#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	number;

	if (index < 0)
	{
		return (-1);
	}
	number = 0;
	if (index >= 0 && index < 2)
	{
		return (index);
	}
	if (index >= 2)
	{
		number = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (number);
}

int	main(void)
{
	int	index;
	int	result;

	index = 5;
	result = ft_fibonacci(index);
	printf("%d", result);
}
