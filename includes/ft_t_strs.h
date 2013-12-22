/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_strs.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 04:27:55 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 04:50:05 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#ifndef FT_T_STR_H
# define FT_T_STR_H

typedef struct		s_str
{
	char			*s;
	size_t			l;
}					t_str;

t_str	*ft_itot_str(int n);
void	ft_t_strcat(t_str *s1, t_str *s2);
char	*ft_t_strchr(t_str *str, char c);
int		ft_t_strcmp(t_str *str1, t_str *str2);
void	ft_t_strcpy(t_str *str, t_str *orig);
t_str	*ft_t_strcutchr(t_str *str, char c);
void	ft_t_strdel(t_str **str);
t_str	*ft_t_strdup(t_str *orig);
t_str	*ft_t_strjoin(t_str *s1, t_str *s2);
t_str	*ft_t_strnew(char *s, size_t size);
t_str	*ft_t_strsub(t_str *str, size_t start, size_t size);
int		ft_t_strtoi(t_str *str);
char	*ft_t_strtostr(t_str *str);

#endif /* !FT_T_STR_H */
