/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:49 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/26 22:14:14 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	write(1, "ft_strrchr", 10);
	char	*cur;

	cur = (char *)s;
	if (ft_strchr(cur, c) == NULL)
	{
		return NULL;
	}
	while (ft_strchr(cur, c) != NULL)
	{
		cur = ft_strchr(cur, c);
		cur++;
	}
	return (cur - 1);
}

