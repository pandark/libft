/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ref_atoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 11:00:06 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 12:35:52 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%d\n", atoi("0123"));
	printf("%d\n", atoi("1230"));
	printf("%d\n", atoi("+5678"));
	printf("%d\n", atoi("-7890"));
	printf("%d\n", atoi("-0987"));
	printf("%d\n", atoi("+--++-7890"));
	printf("%d\n", atoi("\v\f\t \n-5437"));

	return (0);
}

