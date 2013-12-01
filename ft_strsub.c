/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:31:12 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/01 20:58:52 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start > ft_strlen((const char *)s))
		return ("");
	len = (len <= ft_strlen((const char *)(&s[start]))) ? len : ft_strlen((const char *)(&s[start]));
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	ft_strncpy(str, (const char *)(&s[start]), len);
	return (str);
}
