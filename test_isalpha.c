/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:07:34 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:08:40 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("a : %d\n", ft_isalpha('a'));
	printf("z : %d\n", ft_isalpha('z'));
	printf("h : %d\n", ft_isalpha('h'));
	printf("0 : %d\n", ft_isalpha('0'));
	printf("9 : %d\n", ft_isalpha('9'));
	printf("4 : %d\n", ft_isalpha('4'));
	printf("%% : %d\n", ft_isalpha('%'));
	printf("\\t : %d\n", ft_isalpha('\t'));
	printf("\\0 : %d\n", ft_isalpha('\0'));

	return (0);
}

