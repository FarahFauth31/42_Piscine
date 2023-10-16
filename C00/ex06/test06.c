#include <unistd.h>

void	ft_l_if_func2(int i, int j, int k, int l)
{
	while (l <= '9')
	{
		if (i < k || (i == k && j < l))
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, " ", 1);
			write(1, &k, 1);
			write(1, &l, 1);
			if (i == '9' && j == '8' && k == '9' && l == '9')
			{
			}
			else
			{
				write(1, ", ", 2);
			}
		}
		++l;
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				l = '0';
				ft_l_if_func2(i, j, k, l);
				++k;
			}
			++j;
		}
		++i;
	}
}

int	main(void)
{
	ft_print_comb2();
}
