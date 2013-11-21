/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_isascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:11:16 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:11:50 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("a : %d\n", isascii('a'));
	printf("z : %d\n", isascii('z'));
	printf("h : %d\n", isascii('h'));
	printf("0 : %d\n", isascii('0'));
	printf("9 : %d\n", isascii('9'));
	printf("4 : %d\n", isascii('4'));
	printf("%% : %d\n", isascii('%'));
	printf("\\t : %d\n", isascii('\t'));
	printf("\\0 : %d\n", isascii('\0'));
	printf("-2345 : %d\n", isascii(-2345));
	printf("2000000000 : %d\n", isascii(2000000000));

	return (0);
}

