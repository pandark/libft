/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 22:27:40 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:27:24 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("a : %d\n", (int)ft_strlen(""));
	printf("a : %d\n", (int)ft_strlen("\b"));
	printf("a : %d\n", (int)ft_strlen("\0"));
	printf("a : %d\n", (int)ft_strlen("ff\0ff"));
	printf("a : %d\n", (int)ft_strlen("dhrejre ywteyt"));
	printf("a : %d\n", (int)ft_strlen("dh\nrej"));
	printf("a : %d\n", (int)ft_strlen("dhr\tej"));

	return (0);
}

