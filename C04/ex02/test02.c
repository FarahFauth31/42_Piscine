#include <unistd.h>
#include <stdio.h>

void	ft_rec(int nb)
{
	int	rest;

	if (nb > 9)
	{
		ft_rec(nb / 10);
	}
	rest = (nb % 10) + 48;
	write(1, &rest, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	ft_rec(nb);
}

int	main(void)
{
	int num;

	num = -214748;
	ft_putnbr(num);
	//printf("%d", num);
}
