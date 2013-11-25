/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 19:26:34 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	write(1, "ft_strchr", 10);
	int		cur;
	char	*str;

	str = (char *)s;
	cur = 0;
	while (str[cur] != c)
	{
		if (str[cur] == '\0')
		{
			return (NULL);
		}
		cur++;
	}
	return (str + cur);
}

