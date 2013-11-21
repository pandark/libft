/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_tolower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:27:39 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:28:11 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("A : %c\n", tolower('a'));
	printf("Z : %c\n", tolower('z'));
	printf("H : %c\n", tolower('h'));
	printf("a : %c\n", tolower('a'));
	printf("z : %c\n", tolower('z'));
	printf("h : %c\n", tolower('h'));
	printf("0 : %c\n", tolower('0'));
	printf("9 : %c\n", tolower('9'));
	printf("4 : %c\n", tolower('4'));
	printf("%% : %c\n", tolower('%'));
	printf("\\t : %c\n", tolower('\t'));
	printf("\\0 : %c\n", tolower('\0'));
	printf("-2345 : %c\n", tolower(-2345));
	printf("2000000000 : %c\n", tolower(2000000000));

	return (0);
}

