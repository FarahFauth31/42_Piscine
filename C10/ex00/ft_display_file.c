/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:17:25 by farah             #+#    #+#             */
/*   Updated: 2023/11/13 13:03:25 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_display_file(char *argv)
{
	int		is_open;
	char	buffer[1];
	int		bytes_read;

	is_open = open(argv, O_RDONLY);
	if (is_open == -1)
	{
		write(1, "Cannot read file.\n", 19);
		return ;
	}
	bytes_read = read(is_open, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, 1);
		bytes_read = read(is_open, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
		write(1, "Cannot read file.\n", 19);
	write(1, "\n", 1);
	close(is_open);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
}
