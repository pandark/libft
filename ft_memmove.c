/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 13:16:31 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include <string.h>

static void		*ft_memcpy_bwd(void *s1, const void *s2, size_t n)
{
	int		cur;
	char	*c1;
	char	*c2;

	c1 = (char *s1);
	c2 = (char *s2);
	cur = n - 1;
	while (cur >= 0)
	{
		c1[cur] = c2[cur];
		cur--;
	}
	return (s1);
}

void			*ft_memmove(void *s1, const void *s2, size_t n)
{
	write(1, "ft_memmove", 10);
	if (s1 < s2)
		return (ft_memcpy(s1, s2, n));
	if (s1 > s2)
		return (ft_memcpy_bwd(s1, s2, n));
	return (s1);
}

