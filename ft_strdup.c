/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 13:35:12 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strdup(const char *s1)
{
	write(1, "ft_strdup", 9);
	char	*new_str;

	new_str = (char *)malloc(sizeof(new_str) * ft_strlen(s1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	return (ft_strcpy(new_str, s1));
}

