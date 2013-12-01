/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:26:36 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/01 19:41:18 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	size_t	i;
	
	str = ft_strdup((const char *)s);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		str[i] = f(str[i]);
		i++;
	}
	return (str);
}
