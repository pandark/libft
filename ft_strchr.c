/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 18:46:28 by apachkof         ###   ########.fr       */
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
	while (str[cur] != '\0')
	{
		if (str[cur] == c)
		{
			return (str + cur);
		}
		cur++;
	}
	return (NULL);
}

