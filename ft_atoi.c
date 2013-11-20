/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:10 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/20 13:22:43 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		atoi(const char *str)
{
	enum e_sign		sign;
	int				offset;
	int				result;

	result = 0;
	sign = (*str == '-') ? neg : pos;
	offset = (*str == '+' || *str == '-') ? 1 : 0;
	while (*(str + offset) >= '0' && *(str + offset) <= '9')
	{
		result = result * 10 + *(str + offset);
		offset++;
	}
	result = (sign == pos) ? result : -1 * result;
	return (result);
}

