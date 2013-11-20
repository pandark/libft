/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:10 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/20 23:25:41 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (c == '\t' || c = '\n' || c = '\v' || c = '\f' || c = '\r' || c = ' ')
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(const char *str)
{
	enum e_sign		sign;
	int				offset;
	int				result;

	while (ft_isspace(*(str + offset)) == 1)
	{
		offset++;
	}
	result = 0;
	sign = (*str == '-') ? neg : pos;
	offset += (*str == '+' || *str == '-') ? 1 : 0;
	while (*(str + offset) >= '0' && *(str + offset) <= '9')
	{
		result = result * 10 + *(str + offset) - 48;
		offset++;
	}
	result = (sign == pos) ? result : -1 * result;
	return (result);
}

