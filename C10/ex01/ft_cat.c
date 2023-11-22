/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: farah <farah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 13:12:00 by farah             #+#    #+#             */
/*   Updated: 2023/11/13 15:35:35 by farah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#define NOERROR 0
#define ERROR 1

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

int	ft_display_file(char *argv)
{
	int		is_open;
	int		is_closed;
	char	buffer[1];
	int		bytes_read;

	is_open = open(argv, O_RDONLY);
	if (is_open == -1)
		return (ERROR);
	bytes_read = read(is_open, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, 1);
		bytes_read = read(is_open, buffer, sizeof(buffer));
	}
	if (bytes_read == -1)
		return (ERROR);
	is_closed = close(is_open);
	if (is_closed == -1)
		return (ERROR);
	return (NOERROR);
}

int	main(int argc, char **argv)
{
	int	error;
	int	i;

	i = 1;
	while (i < argc)
	{
		error = ft_display_file(argv[i]);
		if (error == ERROR)
		{
			write(1, "cat: ", 5);
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, ": ", 2);
			write(1, strerror(errno), ft_strlen(strerror(errno)));
			write(1, "\n", 1);
		}
		i++;
	}
}
