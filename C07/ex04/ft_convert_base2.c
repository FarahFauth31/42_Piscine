/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:18:47 by farah             #+#    #+#             */
/*   Updated: 2023/10/25 15:18:53 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base_to, char *str);

int	ft_baselen(char *str)
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

int	ft_nbr_len(int nbr, char *base_to)
{
	int	count;
	int	len;

	len = ft_baselen(base_to);
	count = 0;
	while (nbr > 0)
	{
		nbr /= len;
		count++;
	}
	return (count);
}

int	ft_base_to_num(char *nbr, char *base_from)
{
	int	temp;
	int	count;
	int	pos;
	int	base_len;

	temp = 0;
	base_len = ft_baselen(base_from);
	while (*nbr != '\0')
	{
		count = 0;
		pos = 0;
		while (count < base_len)
		{
			if (*nbr == base_from[count])
			{
				temp = temp * base_len + count;
				pos = 1;
			}
			count++;
		}
		if (pos == 0)
			return (temp);
		nbr++;
	}
	return (temp);
}

char	*ft_num_to_base(int dec_num, char *base_to, int sign)
{
	char	*str;

	if (dec_num == -2147483648)
		return ("-2147483648");
	str = (char *) malloc ((ft_nbr_len(dec_num, base_to) + 1) * sizeof(char));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	str[ft_nbr_len(dec_num, base_to)] = '\0';
	if (sign == -1)
	{
		*str = '-';
		ft_putnbr_base(dec_num, base_to, str + 1);
	}
	if (sign == 1)
		ft_putnbr_base(dec_num, base_to, str);
	return (str);
}
