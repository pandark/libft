/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/29 18:04:59 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

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
