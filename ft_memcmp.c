/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 13:26:18 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	write(1, "ft_memcmp", 9);
	size_t	cur;
	char	*c1;
	char	*c2;

	cur = 0;
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (cur < n)
	{
		if (c1[cur] != c2[cur])
		{
			return (c1[cur] - c2[cur]);
		}
		cur++;
	}
	return (c1[cur] - c2[cur]);
}

