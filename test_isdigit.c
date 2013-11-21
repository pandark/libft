/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:12:12 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:12:36 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("0 : %d\n", ft_isdigit('0'));
	printf("9 : %d\n", ft_isdigit('9'));
	printf("4 : %d\n", ft_isdigit('4'));
	printf("a : %d\n", ft_isdigit('a'));
	printf("z : %d\n", ft_isdigit('z'));
	printf("h : %d\n", ft_isdigit('h'));
	printf("%% : %d\n", ft_isdigit('%'));
	printf("\\t : %d\n", ft_isdigit('\t'));
	printf("\\0 : %d\n", ft_isdigit('\0'));
	printf("-2345 : %d\n", ft_isdigit(-2345));
	printf("2000000000 : %d\n", ft_isdigit(2000000000));

	return (0);
}

