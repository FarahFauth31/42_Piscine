/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:06:44 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/02 22:01:12 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	number;

	if (power < 0)
	{
		return (0);
	}
	number = 1;
	if (power > 0)
	{
		number = ft_recursive_power(nb, power - 1) * nb;
	}
	return (number);
}
