/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 05:46:03 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 13:47:08 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
* If str->s not malloced, set it to NULL before using ft_t_strdel().
*/
void	ft_t_strdel(t_str **str)
{
	free((*str)->s);
	free(*str);
	*str = NULL;
}
