#include <unistd.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

void	ft_putstr(int *str, int n)
{
	int		i;
	char	num;
	int		display;

	display = TRUE;
	i = 1;
	while (i < n)
	{
		if (str[i - 1] >= str[i])
			display = FALSE;
		i++;
	}
	if (display == TRUE)
	{
		i = -1;
		while (++i < n)
		{
			num = str[i] + '0';
			write(1, &num, 1);
		}
		if (str[0] < (10 - n))
			write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	i;
    int array[10];
	int	positions;

	if (n > 10 || n <= 0)
		return;
	i = -1;
	while (++i < n)
		array[i] = i;
	while (array[0] <= (10 - n) && n >= 1)
	{
		ft_putstr(array, n);
		if (n == 10)
			return ;
		array[n - 1]++;
		positions = n - 1;
		while (positions >= 0)
		{
			if (array[positions] > 9)
			{
				array[positions - 1]++;
				array[positions] = 0;
			}
			positions--;
		}
	}
	return ;
}

int	main(void)
{
	ft_print_combn(8);
	return (0);
}