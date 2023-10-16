#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str = (str + 1);
	}
	return (count);
}

int	ft_errors(char *base, int len)
{
	int	str_count;
	int	str_count2;

	if (len < 2)
		return (1);
	str_count2 = 0;
	while (base[str_count2] != '\0')
	{
		str_count = str_count2 + 1;
		if (base[str_count2] == '+' || base[str_count2] == '-')
		{
			return (1);
		}
		while (base[str_count] != '\0')
		{
			if (base[str_count2] == base[str_count])
			{
				return (1);
			}
			str_count++;
		}
		str_count2++;
	}
	return (0);
}

void	ft_rec(int nb, int len, char *base)
{
	int	rest;
	int	num_base;

	if (nb > (len - 1))
	{
		ft_rec(nb / len, len, base);
	}
	rest = (nb % len);
	num_base = base[rest];
	write(1, &num_base, 1);
	return ;
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;
	int	c;
	int	res;
	int	err;

	len = ft_strlen(base);
	err = 0;
	err = ft_errors(base, len);
	if (err == 1)
		return ;
	c = 0;
	if (nbr == -2147483648)
	{
		c = 1;
		res = -(nbr % len);
		nbr = nbr / len;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_rec(nbr, len, base);
	if (c == 1)
		ft_rec(res, len, base);
}

int	main(void)
{
	int num;
	char hexa[] = "0123456789ABCDEF";
/* 	char dec[] = "0123456789";
	char bi[] = "01";
	char oct[] = "poniguay"; */

	num = -2147483647;
	ft_putnbr_base(num, hexa);
	// printf("%d", num);
}