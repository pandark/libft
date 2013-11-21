/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:00:12 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 12:38:34 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("%d\n", ft_atoi("0123"));
	printf("%d\n", ft_atoi("1230"));
	printf("%d\n", ft_atoi("+5678"));
	printf("%d\n", ft_atoi("-7890"));
	printf("%d\n", ft_atoi("-0987"));
	printf("%d\n", ft_atoi("+--++-7890"));
	printf("%d\n", ft_atoi("\v\f\t \n-5437"));

	return (0);
}

