/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:13:54 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 09:18:58 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	char	*t;
	size_t	i;

	if ((t = malloc(size)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		t[i] = 0;
		i++;
	}
	return (t);
}
