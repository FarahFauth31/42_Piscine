/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_bytes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:05:53 by farah             #+#    #+#             */
/*   Updated: 2023/11/20 16:23:53 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_atoi(char *str)
{
	int	str_count;
	int	temp;

	str_count = 0;
	temp = 0;
	while (str[str_count] >= '0' && str[str_count] <= '9')
	{
		temp = temp * 10 + str[str_count] - '0';
		str_count++;
	}
	return (temp);
}

void	ft_write_num_bytes(char *array, char *argv2)
{
	int	len;
	int	num_bytes;
	int	num_characters;
	int	character;

	len = ft_strlen(array);
	character = len;
	num_bytes = ft_atoi(argv2);
	while (num_characters < num_bytes && character > 0)
	{
		character--;
		num_characters++;
	}
	while (array[character] != '\0')
	{
		write(1, &array[character], 1);
		character++;
	}
}

void	ft_num_bytes(int argc, char **argv, int i)
{
	int		error;
	char	*array;

	error = ft_read_file(argv[i]);
	if (error == NO_ERROR)
	{
		array = ft_create_malloc_file(argv[i]);
		ft_write_in_malloc_file(argv[i], array);
		ft_write_num_bytes(array, argv[2]);
		free(array);
		if (argc > 2 && i != argc - 1)
			write(1, "\n", 1);
	}
	if (error == ERROR_READ)
		ft_error_messages(NO_FILE, argv[i]);
}
