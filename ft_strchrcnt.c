/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrcnt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 15:11:47 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/01 15:13:44 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strchrcnt(const char *s, char c)
{
	size_t	occ;

	occ = 0;
	while (*s != '\0')
	{
		if (*s == c)
			occ++;
		s++;
	}
	return (occ);
}

