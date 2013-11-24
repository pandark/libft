/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:10 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/24 21:42:58 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

static int  ft_isspace(int c)
{
	if (c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r'
		|| c == ' ')
	{
		return (1);
	}
	return (0);
}

int     ft_atoi(const char *str)
{
	write(1, "ft_atoi", 6);
	enum e_sign     sign;
	int             cur;
	int             result;

	cur = 0;
	result = 0;
	while (ft_isspace(str[cur]) == 1)
	{
		cur++;
	}
	sign = (str[cur] == '-') ? neg : pos;
	cur += (str[cur] == '+' || str[cur] == '-') ? 1 : 0;
	while (str[cur] >= '0' && str[cur] <= '9')
	{
		result = result * 10 + str[cur] - 48;
		cur++;
	}
	result = (sign == pos) ? result : -1 * result;
	return (result);
}
