/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strtostr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 04:04:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/19 05:47:04 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_t_strtostr(t_str *str)
{
	char	*new;

	if ((new = (char *)malloc(sizeof(*new) * (str->l + 1))) == NULL)
		return (NULL);
	ft_memcpy(new, str->s, str->l);
	new[str->l + 1] = '\0';
	return (new);
}
