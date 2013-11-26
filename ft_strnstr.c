/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:49 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/26 19:12:57 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	write(1, "ft_strnstr", 10);
	char	*cur;
	size_t	len1;
	size_t	len2;

	len1 = strlen(s1);
	len2 = strlen(s2);
	n = (len1 < n) ? len1 : n;
	cur = (char *)s1;
	if (*s2 == '\0')
	{
		return (cur);
	}
	while (n >= len2 && ft_memchr(cur, *s2, n - len2) != NULL)
	{
		if (ft_memcmp(cur, s2, len2) == 0)
		{
			return (cur);
		}
		cur++;
		n--;
	}
	return (NULL);
}

