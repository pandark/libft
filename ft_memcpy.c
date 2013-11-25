/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 18:00:29 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	write(1, "ft_memcpy", 9);
	int		cur;
	char	*c1;
	char	*c2;

	c1 = (char *)s1;
	c2 = (char *)s2;
	cur = 0;
	while (cur < n)
	{
		c1[cur] = c2[cur];
		cur++;
	}
	return (s1);
}

