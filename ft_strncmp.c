/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:49 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/27 22:07:34 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cur;

	cur = 0;
	if (n <= 0)
	{
		return (0);
	}
	while (s1[cur] != '\0' && s2[cur] != '\0' && cur < n - 1)
	{
		if (s1[cur] != s2[cur])
		{
			return (s1[cur] - s2[cur]);
		}
		cur++;
	}
	return (s1[cur] - s2[cur]);
}

