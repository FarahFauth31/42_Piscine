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

