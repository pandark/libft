/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 12:57:31 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 03:56:53 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_glist	*ft_glstdup(t_glist *orig, void *(*dup)(void *ct), \
void (*del)(void **ct))
{
	void		*content;
	t_glist		*new_link;

	if ((content = dup(ct)) == NULL)
		return (NULL);
	new_link = ft_glstnew(orig->content, del);
	return (new_link);
}
