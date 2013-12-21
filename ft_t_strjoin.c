/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 06:58:38 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/19 05:46:44 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "includes/libft.h"

t_str	*ft_t_strjoin(t_str *s1, t_str *s2)
{
	t_str	*new;
	char	*s;
	size_t	l;

	l = s1->l + s2->l;
	if ((s = ft_memnew(l)) == NULL)
		return (NULL);
	if ((new = ft_t_strnew(s, l)) == NULL)
	{
		ft_memdel(&s);
		return (NULL);
	}
	memcpy(new->s, s1->s, s1->l);
	ft_t_strcat(new, s2);
	return (new);
}
