/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_toupper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:29:51 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:30:17 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("a : %c\n", toupper('a'));
	printf("z : %c\n", toupper('z'));
	printf("h : %c\n", toupper('h'));
	printf("A : %c\n", toupper('a'));
	printf("Z : %c\n", toupper('z'));
	printf("H : %c\n", toupper('h'));
	printf("0 : %c\n", toupper('0'));
	printf("9 : %c\n", toupper('9'));
	printf("4 : %c\n", toupper('4'));
	printf("%% : %c\n", toupper('%'));
	printf("\\t : %c\n", toupper('\t'));
	printf("\\0 : %c\n", toupper('\0'));
	printf("-2345 : %c\n", toupper(-2345));
	printf("2000000000 : %c\n", toupper(2000000000));

	return (0);
}

