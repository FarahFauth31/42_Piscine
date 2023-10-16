/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:09:14 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/27 13:41:54 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str, int count)
{
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	len2;
	unsigned int	count;

	count = 0;
	len = ft_len(dest, 0);
	len2 = ft_len(src, 0);
	if (len < size)
	{
		while (src[count] != '\0' && count < (size - len -1))
		{
			dest[count + len] = src[count];
			count++;
		}
		dest[count + len] = '\0';
		return (len + len2);
	}
	else
	{
		return (len2 + size);
	}
}
