/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 15:25:23 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		cur;
	char	*vs;

	cur = 0;
	vs = (char *)s;
	while (vs[cur] != c)
	{
		if (vs[cur] == '\0')
		{
			return (NULL);
		}
		cur++;
	}
	return (vs + cur);
}

