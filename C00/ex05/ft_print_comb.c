/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:45:05 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/21 11:42:22 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_if_func(int i, int j, int k)
{
	if (i != j && j != k && k != i && i < j && j < k)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		if (i == '7' && j == '8' && k == '9')
		{
		}
		else
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				ft_if_func(i, j, k);
				++k;
			}
			++j;
		}
		++i;
	}
}
