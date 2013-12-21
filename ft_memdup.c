/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 05:40:44 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 12:16:35 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_memdup(char *s, size_t size)
{
	char	*new;

	if ((new = ft_memnew(size)) == NULL)
		return (NULL);
	ft_memcpy(new, s, size);
	return (new);
}
