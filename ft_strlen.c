/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:19:02 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <sys/types.h>

size_t	ft_strlen(const char *s)
{
	unsigned char	*buf;

	buf = (unsigned char *)s;
	while (42)
	{
		if (!(*(ssize_t *)buf & 0xFF))
			return (buf - (const unsigned char *)s);
		if (!(*(ssize_t *)buf & 0xFF00))
			return (buf - (const unsigned char *)s + 1);
		if (!(*(ssize_t *)buf & 0xFF0000))
			return (buf - (const unsigned char *)s + 2);
		if (!(*(ssize_t *)buf & 0xFF000000))
			return (buf - (const unsigned char *)s + 3);
		buf += 4;
	}
}
