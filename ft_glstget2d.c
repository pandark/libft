/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glstget2d.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 11:48:35 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:50:42 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_glist	*ft_glstget2d(t_glist *start, int i, int j)
{
	if ((start = ft_glstget(start, i)) != NULL)
		start = ft_glstget(start, j);
	return (start);
}
