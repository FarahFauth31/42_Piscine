/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:18:29 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/06 11:35:19 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		count;

	len = ft_strlen(src);
	ptr = (char *) malloc (len * sizeof(char));
	if (!ptr)
		return (NULL);
	count = 0;
	while (src[count] != '\0')
	{
		ptr[count] = src[count];
		count++;
	}
	ptr[count] = '\0';
	return (ptr);
}
