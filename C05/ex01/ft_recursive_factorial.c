/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:09:24 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/02 12:09:28 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
	{
		return (0);
	}
	factorial = 1;
	if (nb == 0)
	{
		return (factorial);
	}
	if (nb > 1)
	{
		factorial = ft_recursive_factorial(nb - 1);
	}
	factorial = factorial * nb;
	return (factorial);
}
