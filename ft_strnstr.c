/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:49 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 21:24:08 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	write(1, "ft_strnstr", 10);
	char	*c1;
	size_t		len_s2;
	size_t		len_cmp;

	len_s2 = ft_strlen(s2);
	len_cmp = ft_strlen(s1) - len_s2;
	len_cmp = (len_cmp <= n) ? len_cmp : n;
	c1 = (char *)s1;
	while (ft_strchr(c1, *s2) != NULL)
	{
		if (ft_memcmp(c1, s2, len_s2) == 0)
		{
			return (c1);
		}
		c1++;
	}
	return (NULL);
}

