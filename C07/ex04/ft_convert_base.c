/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:16:00 by farah             #+#    #+#             */
/*   Updated: 2023/10/25 15:16:27 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_baselen(char *str);
int		ft_base_to_num(char *nbr, char *base_from);
char	*ft_num_to_base(int dec_num, char *base_to, int sign);

int	ft_errors(char *base, int len)
{
	int	str_count;
	int	str_count2;

	if (len < 2)
		return (1);
	str_count2 = 0;
	if (base == NULL)
		return (1);
	while (base[str_count2] != '\0')
	{
		str_count = str_count2 + 1;
		if (base[str_count2] == 32 || base[str_count2] == '\f'
			|| base[str_count2] == '\n' || base[str_count2] == '\r'
			|| base[str_count2] == '\t' || base[str_count2] == '\v'
			|| base[str_count2] == '+' || base[str_count2] == '-')
			return (1);
		while (base[str_count] != '\0')
		{
			if (base[str_count2] == base[str_count])
				return (1);
			str_count++;
		}
		str_count2++;
	}
	return (0);
}

int	ft_all_base_errors(char *base_from, char *base_to)
{
	int	base_len;
	int	err;

	base_len = ft_baselen(base_from);
	err = ft_errors(base_from, base_len);
	if (err == 1)
		return (0);
	base_len = ft_baselen(base_to);
	err = ft_errors(base_to, base_len);
	if (err == 1)
		return (0);
}

char	*ft_rec(int nb, int len, char *base, char *str)
{
	int	rest;
	int	num_base;

	if (nb > (len - 1))
	{
		str = ft_rec(nb / len, len, base, str);
	}
	rest = (nb % len);
	*str = base[rest];
	str++;
	return (str);
}

void	ft_putnbr_base(int nbr, char *base_to, char *str)
{
	int	len;
	int	res;

	len = ft_baselen(base_to);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	ft_rec(nbr, len, base_to, str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		temp;
	int		str_count;
	char	*str;
	int		dec_num;
	int		sign;

	if (ft_all_base_errors(base_from, base_to) == 1)
		return (0);
	str_count = 0;
	sign = 1;
	while (nbr[str_count] == 32 || nbr[str_count] == '\f'
		|| nbr[str_count] == '\n' || nbr[str_count] == '\r'
		|| nbr[str_count] == '\t' || nbr[str_count] == '\v')
		str_count++;
	while (nbr[str_count] == '+' || nbr[str_count] == '-')
	{
		if (nbr[str_count] == '-')
			sign = sign *(-1);
		str_count++;
	}
	nbr = nbr + str_count;
	dec_num = ft_base_to_num(nbr, base_from);
	str = ft_num_to_base(dec_num, base_to, sign);
	return (str);
}
