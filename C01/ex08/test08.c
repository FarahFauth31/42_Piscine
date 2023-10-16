#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	len;
	int	p;

	count = 0;
	while (count < size)
	{
		len = 0;
		while (len < size - 1)
		{
			if (tab[len] > tab[len + 1])
			{
				p = tab[len];
				tab[len] = tab[len + 1];
				tab[len + 1] = p;
			}
			len++;
		}
		count++;
	}
}

int	main(void)
{
	int	size;
	int	A[6] = {5, 23, 89, 11, 654};
	//int	*ptr;
	int	j;

	size = 5;
	//*ptr = A;
	ft_sort_int_tab(A, size);
	j = 0;
	while (j < size)
	{
		printf("%d", A[j]);
		j++;
	}
	// printf("%d", nb);
	// nnum = nnum + 48;
	// write(1, ptr, 1);
}
