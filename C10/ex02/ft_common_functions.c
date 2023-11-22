/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_common_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:03:31 by farah             #+#    #+#             */
/*   Updated: 2023/11/20 16:22:40 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str = (str + 1);
	}
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	if ((s1[count] != '\0' && s2[count] == '\0') || (s2[count] != '\0'
			&& s1[count] == '\0'))
		return (s1[count] - s2[count]);
	return (0);
}

void	ft_write_header(int argc, char *argv, int num_args)
{
	if (argc > num_args)
	{
		write(1, "==> ", 4);
		write(1, argv, ft_strlen(argv));
		write(1, " <==\n", 5);
	}
}

int	ft_initial_i(char **argv)
{
	int	i;

	if (ft_strcmp("-c", argv[1]) == 0)
		i = 3;
	else
		i = 1;
	return (i);
}
