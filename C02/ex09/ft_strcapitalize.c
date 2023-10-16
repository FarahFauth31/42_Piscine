/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:54:25 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/26 11:23:34 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	counter;

	count = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 'A' && str[counter] <= 'Z'))
		{
			str[counter] = str[counter] + 32;
		}
		if ((str[counter] >= 'a' && str[counter] <= 'z' && count == 1))
		{
			str[counter] = str[counter] - 32;
		}
		if ((str[counter] < 48 && str[counter] >= 32) || (str[counter] > 57
				&& str[counter] < 65) || (*str > 90 && str[counter] < 97)
			|| (str[counter] > 122 && str[counter] < 127))
		{
			count = 0;
		}
		counter++;
		count++;
	}
	return (str);
}
