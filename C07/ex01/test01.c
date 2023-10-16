#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		len;
	int		count;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	len = max - min;
	ptr = (int *) malloc (len * sizeof(int));
	if (!ptr)
		return (ptr);
	count = 0;
	while (count < len)
	{
		ptr[count] = count + min;
		count++;
	}
	return (ptr);
}

int main (void)
{
	int *ptr;
	int min;
	int max;

	min = 0;
	max = -3;
	ptr = ft_range(min, max);
	printf("%d\n", ptr);
/* 	while (*ptr != '\0')
	{
		printf("%d\n", *ptr);
		ptr = (ptr + 1);
	} */
}
