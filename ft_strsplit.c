/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:41:45 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/01 19:37:26 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	ft_cnt_parts(const char *s, char c)
{
	size_t		cnt;

	if (c == '\0')
		return (1);
	cnt = 1;
	while (*s == c)
		s++;
	s++;
	while (*s != '\0')
	{
		while (*s == c && *(s-1) == c)
			s++;
		if (*s == c && *(s + 1) != '\0')
			cnt++;
		s++;
	}
	return (cnt);
}

static void		ft_banana(char **t, const char *s, char c)
{
	size_t		start;
	size_t		end;
	size_t		i;

	start = 0;
	end = 0;
	i = 0;
	while (s[start] != '\0')
	{
		end = start;
		while (s[end] != '\0' && s[end] != c)
			end++;
		if (end - start > 1)
		{
			t[i] = (char *)malloc(sizeof(char) * (end - start));
			i++;
		}
		start = end + 1;
	}
	t[i] = ft_strnew(0);
	if (i == 0)
		t[1] = ft_strnew(0);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**t;
	size_t		len;

	len = ft_cnt_parts((const char *)s, c);
	t = (char **)malloc(sizeof(char *) * (len + 1));
	ft_banana(t, s, c);
	return (t);
}
