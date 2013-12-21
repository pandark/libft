/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 11:47:52 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 11:50:33 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_glist	*ft_glstget(t_glist *start, int n)
{
	while (n-- && start != NULL)
		start = start->next;
	return (start);
}
