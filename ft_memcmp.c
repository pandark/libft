/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/30 06:17:00 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		cur;
	const char	*str1;
	const char	*str2;

	str1 = (const char *)s1;
	str2 = (const char *)s2;
	cur = 0;
	while (cur < n)
	{
		if (str1[cur] != str2[cur])
			return (str1[cur] - str2[cur]);
		cur++;
	}
	return (str1[cur] - str2[cur]);
}

