/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:51:21 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/24 12:51:42 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	count;
	int	y;

	y = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] < 'A' || str[count] > 'Z'))
		{
			if ((str[count] > 'z' || str[count] < 'a'))
			{
				y = 0;
			}
		}
		count++;
	}
	return (y);
}
