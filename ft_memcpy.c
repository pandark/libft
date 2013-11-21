/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 12:25:24 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
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
		cur++;
	}
	return (s1);
}

