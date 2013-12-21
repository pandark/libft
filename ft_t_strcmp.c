/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 06:13:11 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/19 07:23:10 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_t_strcmp(t_str *str1, t_str *str2)
{
	size_t	size;
	int		ret;

	if (str1->l == str2->l)
		return (ft_memcmp(str1->s, str2->s, str1->l));
	size = (str1->l < str2->l) ? str1->l : str2->l;
	if ((ret = ft_memcmp(str1->s, str2->s, size)) != 0)
		return (ret);
	if (str1->l > str2->l)
		return (str1->s[str2->l + 1]);
	return ((int)(-(str2->s[str1->l + 1])));
}
