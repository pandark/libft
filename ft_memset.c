/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 20:56:12 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/27 22:01:33 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cur;

	cur = (unsigned char *)b;
	while (len > 0)
	{
		*cur = (unsigned char)c;
		cur++;
		len--;
	}
	return b;
}

