/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 19:42:05 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*src;
	char	*dst;

	if ((s1 < s2 && s1 + n < s2) || (s2 < s1 && s2 + n < s1))
	{
		return (ft_memcpy(s1, s2, n));
	}
	if (s1 < s2)
	{
		n -= (s2 - s1);
	}
	if (s1 > s2)
	{
		n -= (s1 - s2);
	}
	return (s1);
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


