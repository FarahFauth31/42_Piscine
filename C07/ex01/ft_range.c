/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:16:29 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/10/06 11:37:02 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ptr;
	int		len;
	int		count;

	if (min >= max)
	{
		ptr = NULL;
		return (ptr);
	}
	len = max - min;
	ptr = (int *) malloc (len * sizeof(int));
	count = 0;
	while (count < len)
	{
		ptr[count] = count + min;
		count++;
	}
	return (ptr);
}
