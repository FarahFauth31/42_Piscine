/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 21:13:57 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/02 22:03:57 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	number;

	if (index < 0)
	{
		return (-1);
	}
	number = 0;
	if (index >= 0 && index < 2)
	{
		return (index);
	}
	if (index >= 2)
	{
		number = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (number);
}
