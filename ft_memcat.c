/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 07:17:46 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 12:15:57 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcat(void *s1, const void *s2, size_t l1, size_t l2)
{
	ft_memcpy(s1 + l1, s2, l2);
	return (s1);
}
