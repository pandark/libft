/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:23:09 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 12:23:46 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int		main(void)
{
	char	s1[15];
	char	s2[10];
	int		i;

	for (i=0;i<15;i++)
	{
		s1[i] = 'o' - i;
	}
	for (i=0;i<10;i++)
	{
		s2[i] = '9' - i;
	}

	ft_memcpy(s1, s2, 8);
	write(1, "s1 : ", 5);
	write(1, s1, 15);
	write(1, "\ns2 : ", 6);
	write(1, s2, 10);
	write(1, "\n", 1);

	for (i=0;i<15;i++)
	{
		s1[i] = 'o' - i;
	}
	for (i=0;i<10;i++)
	{
		s2[i] = '9' - i;
	}
	s1[4] = '\0';
	s2[6] = '\0';
	s1[2] = '\n';
	s2[3] = '\n';

	ft_memcpy(s1, s2, 8);
	write(1, "s1 : ", 5);
	write(1, s1, 15);
	write(1, "\ns2 : ", 6);
	write(1, s2, 10);
	write(1, "\n", 1);

	return (0);
}

