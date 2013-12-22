/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:05:55 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 04:33:32 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ft_tests.h"
#include "ft_puts.h"
#include "ft_mems.h"
#include "ft_strs.h"
#include "ft_glsts.h"
#include "ft_t_strs.h"
#include "ft_lsts.h"

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(const char *str);
char	*ft_itoa(int n);

int		ft_tolower(int c);
int		ft_toupper(int c);

int		ft_getnextline(int const fd, t_str **line);

#endif /* !LIBFT_H */
