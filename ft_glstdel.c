/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 08:25:51 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 09:47:03 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_glstdel(t_glist **start, void (*del)(void **ct))
{
	t_glist	*next;

	while (*start != NULL)
	{
		next = (*start)->next;
		ft_glstdelone(start, del);
		*start = next;
	}
}
