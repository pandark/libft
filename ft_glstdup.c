/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 12:57:31 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:02:57 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_glist	*ft_glstdup(t_glist *orig, void *(*new)(void *ct), void (*del)(void **ct))
{
	t_glist		*new_link;

	new_link = ft_glstnew(orig->content, new, del);
	return (new_link);
}
