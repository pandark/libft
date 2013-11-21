/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:46:19 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:15:01 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("a : %d\n", ft_isalnum('a'));
	printf("z : %d\n", ft_isalnum('z'));
	printf("h : %d\n", ft_isalnum('h'));
	printf("0 : %d\n", ft_isalnum('0'));
	printf("9 : %d\n", ft_isalnum('9'));
	printf("4 : %d\n", ft_isalnum('4'));
	printf("%% : %d\n", ft_isalnum('%'));
	printf("\\t : %d\n", ft_isalnum('\t'));
	printf("\\0 : %d\n", ft_isalnum('\0'));

	return (0);
}

