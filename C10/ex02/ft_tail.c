/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:05:50 by farah             #+#    #+#             */
/*   Updated: 2023/11/20 16:23:34 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	main(int argc, char **argv)
{
	int		i;
	int		error;

	while (argc == 1)
	{
	}
	i = ft_initial_i(argv);
	while (i < argc)
	{
		if (ft_strcmp("-c", argv[1]) == 0)
		{
			error = ft_check_c_errors(argc, argv);
			if (error != 0)
				return (0);
			ft_write_header(argc, argv[i], 4);
			ft_num_bytes(argc, argv, i);
		}
		else
		{
			ft_write_header(argc, argv[i], 2);
			ft_ten_lines(argc, argv, i);
		}
		i++;
	}
}
