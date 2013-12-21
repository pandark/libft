/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 10:21:10 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 10:21:51 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_glstiter(t_glist *lst, void (*f)(t_glist *elem))
{
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}
