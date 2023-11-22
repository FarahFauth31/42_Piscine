/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:05:53 by farah             #+#    #+#             */
/*   Updated: 2023/11/20 16:17:51 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_read_file(char *argv)
{
	int		is_open;
	int		is_closed;
	char	buffer[1];
	int		bytes_read;

	is_open = open(argv, O_RDONLY);
	if (is_open == -1)
		return (ERROR_READ);
	bytes_read = read(is_open, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		bytes_read = read(is_open, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
		return (ERROR_READ);
	is_closed = close(is_open);
	if (is_closed == -1)
		return (ERROR_READ);
	return (NO_ERROR);
}

char	*ft_create_malloc_file(char *argv)
{
	int		file;
	int		size;
	char	buffer[1];
	int		bytes_read;
	char	*array;

	file = open(argv, O_RDONLY);
	bytes_read = read(file, buffer, sizeof(buffer));
	size = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(file, buffer, sizeof(buffer));
		size++;
	}
	array = (char *) malloc (size * sizeof(char));
	close(file);
	return (array);
}

char	*ft_write_in_malloc_file(char *argv, char *array)
{
	int		file;
	char	buffer[1];
	int		bytes_read;
	int		i;

	file = open(argv, O_RDONLY);
	bytes_read = read(file, buffer, sizeof(buffer));
	i = 0;
	while (bytes_read > 0)
	{
		array[i] = buffer[0];
		i++;
		bytes_read = read(file, buffer, sizeof(buffer));
	}
	close(file);
	return (array);
}

void	ft_write_last_10_lines(char *array)
{
	int	len;
	int	num_lines;
	int	character;

	len = ft_strlen(array);
	character = len;
	num_lines = 1;
	while (num_lines < 11 && character > 0)
	{
		character--;
		if (array[character - 1] == '\n')
			num_lines++;
	}
	while (array[character] != '\0')
	{
		write(1, &array[character], 1);
		character++;
	}
}

void	ft_ten_lines(int argc, char **argv, int i)
{
	int		error;
	char	*array;

	error = ft_read_file(argv[i]);
	if (error == NO_ERROR)
	{
		array = ft_create_malloc_file(argv[i]);
		ft_write_in_malloc_file(argv[i], array);
		ft_write_last_10_lines(array);
		free(array);
		if (argc > 2 && i != argc - 1)
			write(1, "\n", 1);
	}
	if (error == ERROR_READ)
		ft_error_messages(NO_FILE, argv[i]);
}
