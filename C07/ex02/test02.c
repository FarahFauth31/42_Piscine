#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	count;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (!*range)
	{
		return (-1);
	}
	count = 0;
	while (count < len)
	{
		(*range)[count] = count + min;
		printf("%d\n", (*range)[count]);
		count++;
	}
	return (len);
}

int	main(void)
{
	int	*range;
	int	min;
	int	max;
	int	num;

	min = 2;
	max = 1;
	num = ft_ultimate_range(&range, min, max);
	printf("%d\n", num);
}