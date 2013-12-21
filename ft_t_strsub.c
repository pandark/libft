/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 04:05:31 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/19 19:48:01 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "includes/libft.h"

t_str	*ft_t_strsub(t_str *str, size_t start, size_t size)
{
	t_str	*new;

	if ((new = ft_t_strnew(NULL, size)) == NULL)
		return (NULL);
	ft_memcpy(new->s, str->s + start, size);
	return (new);
}
