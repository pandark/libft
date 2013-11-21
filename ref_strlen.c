/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_strlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:26:12 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:26:34 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("a : %d\n", (int)strlen(""));
	printf("a : %d\n", (int)strlen("\b"));
	printf("a : %d\n", (int)strlen("\0"));
	printf("a : %d\n", (int)strlen("ff\0ff"));
	printf("a : %d\n", (int)strlen("dhrejre ywteyt"));
	printf("a : %d\n", (int)strlen("dh\nrej"));
	printf("a : %d\n", (int)strlen("dhr\tej"));

	return (0);
}

