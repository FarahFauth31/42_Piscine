/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_errors.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:37:48 by farah             #+#    #+#             */
/*   Updated: 2023/11/20 14:12:37 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_is_num(char *num)
{
	int	i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] > '9' || num[i] < '0')
			return (NOT_NUM);
		i++;
	}
	return (NO_ERROR);
}

void	ft_error_messages(int error_message, char *argv)
{
	if (error_message == TWO_ARG)
	{
		write(1, "tail: option requires an argument -- 'c'\n", 41);
		write(1, "Try 'tail --help' for more information.\n", 40);
	}
	if (error_message == NOT_NUM)
	{
		write(1, "tail: invalid number of bytes: '", 33);
		write(1, argv, ft_strlen(argv));
		write(1, "'\n", 2);
	}
	if (error_message == NO_FILE)
	{
		write(1, "tail: cannot open '", 20);
		write(1, argv, ft_strlen(argv));
		write(1, "' for reading: ", 16);
		write(1, strerror(errno), ft_strlen(strerror(errno)));
		write(1, "\n", 1);
	}
}

int	ft_check_c_errors(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_error_messages(TWO_ARG, argv[1]);
		return (TWO_ARG);
	}
	if (argc == 3)
	{
		if (ft_is_num(argv[2]) == NOT_NUM)
		{
			ft_error_messages(NOT_NUM, argv[2]);
			return (NOT_NUM);
		}
		else
		{
			while (argc == 3)
			{
			}
			return (NOT_NUM);
		}
	}
	return (NO_ERROR);
}
