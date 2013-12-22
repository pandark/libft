/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 10:17:31 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 04:03:41 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_glist		*ft_glstnew(void *ct, void (*del)(void **ct))
{
	t_glist		*new_link;

	if ((new_link = (t_glist *)malloc(sizeof(*new_link))) == NULL)
	{
		if (del != NULL)
			del(&content);
		return (NULL);
	}
	new_link->next = NULL;
	new_link->content = content;
	return (new_link);
}

