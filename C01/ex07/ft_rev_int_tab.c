/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:04:35 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/23 17:04:43 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
