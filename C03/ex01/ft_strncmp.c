/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffauth-p <ffauth-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:07:36 by ffauth-p          #+#    #+#             */
/*   Updated: 2023/09/27 13:42:44 by ffauth-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0' && count < n)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	if (count != n)
	{
		if ((s1[count] != '\0' && s2[count] == '\0') || (s2[count] != '\0'
				&& s1[count] == '\0'))
			return (s1[count] - s2[count]);
	}
	return (0);
}
