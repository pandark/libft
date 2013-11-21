/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:52:36 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:28:41 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("A : %c\n", ft_tolower('a'));
	printf("Z : %c\n", ft_tolower('z'));
	printf("H : %c\n", ft_tolower('h'));
	printf("a : %c\n", ft_tolower('a'));
	printf("z : %c\n", ft_tolower('z'));
	printf("h : %c\n", ft_tolower('h'));
	printf("0 : %c\n", ft_tolower('0'));
	printf("9 : %c\n", ft_tolower('9'));
	printf("4 : %c\n", ft_tolower('4'));
	printf("%% : %c\n", ft_tolower('%'));
	printf("\\t : %c\n", ft_tolower('\t'));
	printf("\\0 : %c\n", ft_tolower('\0'));
	printf("-2345 : %c\n", ft_tolower(-2345));
	printf("2000000000 : %c\n", ft_tolower(2000000000));

	return (0);
}

