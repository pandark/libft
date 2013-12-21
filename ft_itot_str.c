/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itot_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 09:39:00 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:41:39 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static void		ft_lengths(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

t_str			*ft_itot_str(int n)
{
	size_t		len;
	int			weight;
	size_t		cur;
	t_str		*str;

	ft_lengths(n, &len, &weight);
	if ((str = ft_t_strnew(NULL, len)) == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
	{
		str->s[cur] = '-';
		cur++;
	}
	if (n > 0)
		n = -n;
	while (weight >= 1)
	{
		str->s[cur++] = -(n / weight % 10) + 48;
		weight /= 10;
	}
	return (str);
}
