/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:41:42 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/03 09:49:35 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int a, char **argv)
{
	int	c;

	a = 0;
	c = 0;
	while (argv[a][c] != 0)
	{
		write (1, &argv[a][c], 1);
		c++;
	}
	write (1, "\n", 1);
}