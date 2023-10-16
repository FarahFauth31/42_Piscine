/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 19:07:15 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/27 21:47:28 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	counter_find;
	int	count_str1;
	int	count_str2;

	if (*to_find == '\0')
		return (str);
	count_str1 = 0;
	while (str[count_str1] != '\0')
	{
		count_str2 = count_str1;
		counter_find = 0;
		if (to_find[counter_find] == str[count_str2])
		{
			while (to_find[counter_find] == str[count_str2]
				&& to_find[counter_find] != '\0')
			{
				if (to_find[counter_find + 1] == '\0')
					return (&str[count_str1]);
				counter_find++;
				count_str2++;
			}
		}
		count_str1++;
	}
	return (NULL);
}
