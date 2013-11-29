/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/29 20:10:43 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*cur;
	char 	*reader;
	size_t	len;

	cur = (char *)ft_memchr(dst, '\0', size);
	if (cur == NULL)
		return (size);
	reader = (char *)src;
	len = (size_t)(cur - dst) + ft_strlen(reader);
	while ((size_t)(cur - dst) < size && *reader != '\0')
	{
		*cur = *reader;
		cur++;
		reader++;
	}
	*cur = '\0';
	return (len);
}

*/
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*psrc;
	size_t	n;
	size_t	dst_len;

	psrc = (char *)src;
	dst_len = (dst - (char *)ft_memchr(dst, '\0', size));
	n = size - dst_len;
	if (n == 0)
		return (dst_len + ft_strlen(psrc));
	while (*psrc != '\0')
	{
		if (n != 1)
		{
			*dst++ = *psrc;
			n--;
		}
		psrc++;
	}
	*dst = '\0';
	return (dst_len + (psrc - src));
}


