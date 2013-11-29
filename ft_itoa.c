/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 17:43:41 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/29 16:32:32 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		int_lengths(int n, size_t *len, int *weight)
{

	*len = (n < 0) ? 1 : 0;
	n = (n < 0) ? -n : n;
	*weight = 1;
	while (n / *weight > 9)
	{
		*weight *= 10;
		*len += 1;
	}
}

char			*ft_itoa(int n)
{
	size_t	len;
	int		weight;
	size_t	cur;
	char	*str;

	int_lengths(n, &len, &weight);
	str = (char *)malloc(sizeof(str) * len);
	if (str == NULL)
		return (NULL);
	cur = 0;
	if (n < 0)
	{
		str[cur] = '-';
		cur++;
		n = -n;
	}
	while (weight > 1)
	{
		str[cur++] = n / weight % 10;
		weight /= 10;
	}
	return (str);
}

