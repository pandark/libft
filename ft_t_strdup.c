/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 04:01:59 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:48:09 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_str	*ft_t_strdup(t_str *orig)
{
	t_str	*new;
	char	*s;

	if ((s = ft_memdup(orig->s, orig->l)) == NULL)
		return (NULL);
	if ((new = ft_t_strnew(s, orig->l)) == NULL)
	{
		ft_memdel(&s);
		return (NULL);
	}
	return (new);
}
