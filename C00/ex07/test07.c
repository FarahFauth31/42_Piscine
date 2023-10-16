#include <unistd.h>

int	ft_count(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

void	ft_write_num(int n, int c)
{
	int	div;
	int	rsv_count;
	int	res;
	int	number;

	while (c > 0)
	{
		rsv_count = c - 1;
		div = 1;
		while (rsv_count > 0)
		{
			div = div * 10;
			rsv_count--;
		}
		number = n / div;
		res = number % 10 + 48;
		write(1, &res, 1);
		c--;
	}
}

void	ft_putnbr(int nb)
{
	int	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	c = ft_count(nb);
	ft_write_num(nb, c);
}

int	main(void)
{
	ft_putnbr(-99133344);
}
