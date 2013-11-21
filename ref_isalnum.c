/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_isalnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:04:59 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:14:56 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("a : %d\n", isalnum('a'));
	printf("z : %d\n", isalnum('z'));
	printf("h : %d\n", isalnum('h'));
	printf("0 : %d\n", isalnum('0'));
	printf("9 : %d\n", isalnum('9'));
	printf("4 : %d\n", isalnum('4'));
	printf("%% : %d\n", isalnum('%'));
	printf("\\t : %d\n", isalnum('\t'));
	printf("\\0 : %d\n", isalnum('\0'));

	return (0);
}

