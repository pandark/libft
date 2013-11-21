/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:13:28 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:13:29 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("a : %d\n", ft_isascii('a'));
	printf("z : %d\n", ft_isascii('z'));
	printf("h : %d\n", ft_isascii('h'));
	printf("0 : %d\n", ft_isascii('0'));
	printf("9 : %d\n", ft_isascii('9'));
	printf("4 : %d\n", ft_isascii('4'));
	printf("%% : %d\n", ft_isascii('%'));
	printf("\\t : %d\n", ft_isascii('\t'));
	printf("\\0 : %d\n", ft_isascii('\0'));
	printf("-2345 : %d\n", ft_isascii(-2345));
	printf("2000000000 : %d\n", ft_isascii(2000000000));

	return (0);
}

