/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:40:04 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/25 00:24:34 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_trimlen(char *s)
{
	int		i;

	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			i++;
		}
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(str) * ft_trimlen((char *)s));
	if (str == NULL)
	{
		return (NULL);
	}
	while(s[i] != '\0')
	{
		if(s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

