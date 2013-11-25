/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 13:22:00 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	write (1, "ft_memchr", 9);
	char	*cur;

	cur = (char *)s;
	if (n <= 0)
	{
		return (NULL);
	}
	while (*cur != c)
	{
		if (n <= 0)
		{
			return (NULL);
		}
		cur++;
		n--;
	}
	return (cur);
}

