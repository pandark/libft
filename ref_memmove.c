/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:27:12 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 16:09:11 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		main(void)
{
	char	s1[15];
	char	s2[10];
	char	*s3;
	int		i;

	for (i=0;i<15;i++)
	{
		s1[i] = 'o' - i;
	}
	for (i=0;i<10;i++)
	{
		s2[i] = '9' - i;
	}

	write(1, memmove(s1, s2, 8), 8);
	write(1, "\ns1 : ", 6);
	write(1, s1, 15);
	write(1, "\ns2 : ", 6);
	write(1, s2, 10);
	write(1, "\n", 1);

	write(1, "\n---\n", 5);

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

	write(1, memmove(s1, s2, 8), 8);
	write(1, "----", 4);
	write(1, "\ns1 : ", 6);
	write(1, s1, 15);
	write(1, "\ns2 : ", 6);
	write(1, s2, 10);
	write(1, "\n", 1);

	write(1, "\n---\n", 5);

	for (i=0;i<15;i++)
	{
		s1[i] = 'o' - i;
	}
	s3 = s1 + 3;

	write(1, memmove(s1, s3, 8), 8);
	write(1, "\ns1 : ", 6);
	write(1, s1, 15);
	write(1, "\ns3 : ", 6);
	write(1, s3, 10);
	write(1, "\n", 1);

	write(1, "\n---\n", 5);

	for (i=0;i<15;i++)
	{
		s1[i] = 'o' - i;
	}
	s3 = s1 + 3;

	write(1, memmove(s3, s1, 8), 8);
	write(1, "\ns1 : ", 6);
	write(1, s1, 15);
	write(1, "\ns3 : ", 6);
	write(1, s3, 10);
	write(1, "\n", 1);

	write(1, "\n---\n", 5);

	return (0);
}
