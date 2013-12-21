/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_bwd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/20 19:00:07 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 11:45:26 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy_bwd(void *s1, const void *s2, size_t n)
{
	char	*c1;
	char	*c2;

	if (n == 0 || s1 == s2)
		return (s1);
	c1 = (char *)s1;
	c2 = (char *)s2;
	while (n--)
	{
		c1[n] = c2[n];
	}
	return (s1);
}
