/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:10:27 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/24 13:10:29 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	count;
	int	y;

	y = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if ((str[count] > 'Z' || str[count] < 'A'))
		{
			y = 0;
		}
		count++;
	}
	return (y);
}
