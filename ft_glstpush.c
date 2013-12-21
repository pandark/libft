/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstpush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 09:45:27 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 09:45:39 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_glstpush(t_glist **start, t_glist *link)
{
	t_glist		*cur;

	if (*start == NULL)
	{
		*start = link;
	}
	else
	{
		cur = *start;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = link;
	}
}

