/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_isalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:08:56 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:09:27 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("a : %d\n", isalpha('a'));
	printf("z : %d\n", isalpha('z'));
	printf("h : %d\n", isalpha('h'));
	printf("0 : %d\n", isalpha('0'));
	printf("9 : %d\n", isalpha('9'));
	printf("4 : %d\n", isalpha('4'));
	printf("%% : %d\n", isalpha('%'));
	printf("\\t : %d\n", isalpha('\t'));
	printf("\\0 : %d\n", isalpha('\0'));

	return (0);
}

