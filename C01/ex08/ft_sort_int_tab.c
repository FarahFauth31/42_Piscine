/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:37:29 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/23 18:03:13 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
