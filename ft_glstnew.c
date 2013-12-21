/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 10:17:31 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 10:18:10 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_glist	*ft_glstnew(void *ct, void *(*new)(void *ct), void (*del)(void **ct))
{
	void	*content;
	t_glist	*new_link;

	if ((content = new(ct)) == NULL)
		return (NULL);
	if ((new_link = (t_glist *)malloc(sizeof(*new_link))) == NULL)
	{
		del(&content);
		return (NULL);
	}
	new_link->content = content;
	new_link->next = NULL;
	return (new_link);
}

