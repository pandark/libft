/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 20:05:59 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/20 20:47:11 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

void reference()
{
	printf("a : %d\n", isprint('a'));
	printf("z : %d\n", isprint('z'));
	printf("h : %d\n", isprint('h'));
	printf("0 : %d\n", isprint('0'));
	printf("9 : %d\n", isprint('9'));
	printf("4 : %d\n", isprint('4'));
	printf("%% : %d\n", isprint('%'));
	printf("\\t : %d\n", isprint('\t'));
	printf("\\0 : %d\n", isprint('\0'));
	printf("-2345 : %d\n", isprint(-2345));
	printf("2000000000 : %d\n", isprint(2000000000));
}

void test()
{
	printf("a : %d\n", ft_isprint('a'));
	printf("z : %d\n", ft_isprint('z'));
	printf("h : %d\n", ft_isprint('h'));
	printf("0 : %d\n", ft_isprint('0'));
	printf("9 : %d\n", ft_isprint('9'));
	printf("4 : %d\n", ft_isprint('4'));
	printf("%% : %d\n", ft_isprint('%'));
	printf("\\t : %d\n", ft_isprint('\t'));
	printf("\\0 : %d\n", ft_isprint('\0'));
	printf("-2345 : %d\n", ft_isprint(-2345));
	printf("2000000000 : %d\n", ft_isprint(2000000000));
}

int main(void)
{
	reference();
	printf("----\n");
	test();
	return (0);
}

