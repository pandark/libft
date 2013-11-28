/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/28 16:39:29 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*cur;
	char 	*reader;

	cur = ft_memchr(dst, '\0', size);
	if (cur == NULL)
		return (size);
	reader = (char *)src;
	while (cur < dst + size && *reader != '\0')
	{
		*cur = *reader;
		cur++;
	}
	*cur = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
