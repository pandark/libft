/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:49 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 15:18:59 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*cur;

	cur = (char *)s;
	if (ft_strrchr(cur, c) == NULL)
	{
		return NULL;
	}
	while (ft_strrchr(cur, c) != NULL)
	{
		cur = ft_strrchr(cur, c);
		cur++;
	}
	return (cur);
}

