/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:54:04 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:30:48 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("a : %c\n", ft_toupper('a'));
	printf("z : %c\n", ft_toupper('z'));
	printf("h : %c\n", ft_toupper('h'));
	printf("A : %c\n", ft_toupper('a'));
	printf("Z : %c\n", ft_toupper('z'));
	printf("H : %c\n", ft_toupper('h'));
	printf("0 : %c\n", ft_toupper('0'));
	printf("9 : %c\n", ft_toupper('9'));
	printf("4 : %c\n", ft_toupper('4'));
	printf("%% : %c\n", ft_toupper('%'));
	printf("\\t : %c\n", ft_toupper('\t'));
	printf("\\0 : %c\n", ft_toupper('\0'));
	printf("-2345 : %c\n", ft_toupper(-2345));
	printf("2000000000 : %c\n", ft_toupper(2000000000));

	return (0);
}

