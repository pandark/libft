/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:49 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/27 20:34:08 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	write(1, "ft_strnstr", 10);
	char	*haystack;
	size_t	l2;

	haystack = (char *)s1;
	if (*s2 == '\0')
		return (haystack);
	l2 = ft_strlen(s2);
	n = (n < ft_strlen(s1)) ? n : ft_strlen(s1);
	while (ft_memchr(haystack, *s2, n) != NULL)
	{
		if (ft_memcmp(haystack, s2, l2) == 0)
			return (haystack);
		haystack++;
		n--;
	}
	return (NULL);
}

