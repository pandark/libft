/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 12:50:39 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 04:30:56 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_glist		*ft_glstcpy(t_glist *link)
{
	t_glist		*new;

	new = ft_glstnew(link->content, NULL);
	new->next = NULL;
	return (new);
}
