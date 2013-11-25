/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:13:54 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 00:12:04 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	write(1, "ft_memalloc", 11);
	char	*str;
	size_t	i;

	str = malloc(size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

