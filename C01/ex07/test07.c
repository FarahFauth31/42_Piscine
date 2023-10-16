#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	p;

	count = 0;
	while (count < size)
	{
		p = tab[count];
		tab[count] = tab[size - 1];
		tab[size - 1] = p;
		size--;
		count++;
	}
}

int	main(void)
{
	int size;
	int A[5] = {5, 1, 2, 4};
	//int *ptr;
	int j;

	size = 4;
	//*ptr = A;

	ft_rev_int_tab(A, size);
	j = 0;
	while (j <= size)
	{
		printf("%d", A[j]);
		j++;
	}

	// printf("%d", nb);
	// nnum = nnum + 48;
	// write(1, ptr, 1);
}
