/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:23:57 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 11:24:02 by apachkof         ###   ########.fr       */
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
		b[i] = '.';
	}
	write(1, memset(b, 'z', 8), 10);
	write(1, "\n", 1);
	write(1, b, 10);
	write(1, "\n", 1);
	for (i=0; i<10; i++)
	{
		b[i] = '.';
	}
	write(1, memset(b, '@', 5), 10);
	write(1, "\n", 1);
	write(1, b, 10);
	write(1, "\n", 1);

	return (0);
}

