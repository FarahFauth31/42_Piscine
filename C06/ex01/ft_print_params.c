/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:44:58 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/03 09:50:56 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char **argv)
{
	int	c;
	int	arg;

	arg = 1;
	while (arg < a)
	{
		c = 0;
		while (argv[arg][c] != 0)
		{
			write (1, &argv[arg][c], 1);
			c++;
		}
		write (1, "\n", 1);
		arg++;
	}
}
