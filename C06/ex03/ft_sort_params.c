/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 09:57:06 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/03 15:01:32 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_ascii_value(int a, int arg, char **argv)
{
	int		num_arg;
	int		compare;
	char	*temp;

	while (arg < a)
	{
		num_arg = 1;
		while (num_arg < a - 1)
		{
			compare = ft_strcmp(argv[num_arg], argv[num_arg + 1]);
			if (compare > 0)
			{
				temp = argv[num_arg];
				argv[num_arg] = argv[num_arg + 1];
				argv[num_arg + 1] = temp;
			}
			num_arg++;
		}
		arg++;
	}
}

int	main(int a, char **argv)
{
	int	c;
	int	arg;

	arg = 1;
	ft_ascii_value(a, arg, argv);
	arg = 1;
	while (arg < a)
	{
		c = 0;
		while (argv[arg][c] != 0)
		{
			write(1, &argv[arg][c], 1);
			c++;
		}
		write(1, "\n", 1);
		arg++;
	}
}
