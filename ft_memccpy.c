/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 13:21:24 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*c1;
	char	*c2;
	size_t	cur;

	cur = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		if (c1[cur] == c)
		{
			return (c1 + cur + 1);
		}
		cur++;
	}
	return (NULL);
}

