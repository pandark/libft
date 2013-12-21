/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 10:22:00 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 10:22:22 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_glist	*ft_glstmap(t_glist *lst, t_glist *(*f)(t_glist *elem))
{
	t_glist	*new;
	t_glist	*link;

	new = NULL;
	link = NULL;
	while (lst != NULL)
	{
		if (new == NULL)
		{
			new = f(lst);
			link = new;
		}
		else
		{
			link->next = f(lst);
		}
	}
	return (new);
}
