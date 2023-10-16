/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:48:55 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/22 12:51:35 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;
	int	div;
	int	mod;

	temp_a = *a;
	temp_b = *b;
	div = temp_a / temp_b;
	mod = temp_a % temp_b;
	*a = div;
	*b = mod;
}
