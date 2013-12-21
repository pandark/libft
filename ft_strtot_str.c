/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtot_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 06:35:29 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/19 05:46:08 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_str	*ft_strtot_str(char *str)
{
	return (ft_t_strnew(str, ft_strlen(str)));
}
