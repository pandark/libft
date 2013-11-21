/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 21:27:20 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:03:56 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int main(void)
{
	char	b[10];
	int i;

	for (i=0; i<10; i++)
	{
		b[i] = 'X';
	}
	bzero(b, 8);
	for (i=0; i<10; i++)
	{
		if (b[i] == 0)
		{
			write(1, "O", 1);
		}
		else
		{
			write(1, &b[i], 1);
		}
	}
	write(1, "\n", 1);

	for (i=0; i<10; i++)
	{
		b[i] = 'X';
	}
	bzero(b, 5);
	for (i=0; i<10; i++)
	{
		if (b[i] == 0)
		{
			write(1, "O", 1);
		}
		else
		{
			write(1, &b[i], 1);
		}
	}
	write(1, "\n", 1);

	return (0);
}


