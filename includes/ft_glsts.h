/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_glsts.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/22 04:26:05 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/22 04:46:12 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GLSTS_H
# define FT_GLSTS_H

typedef struct		s_glist
{
	void			*content;
	struct s_glist	*next;
}					t_glist;

t_glist	*ft_glstcpy(t_glist *link);
void	ft_glstdel(t_glist **start, void (*del)(void **ct));
void	ft_glstdelone(t_glist **link, void (*del)(void **ct));
t_glist	*ft_glstdup(t_glist *orig, void *(*new)(void *ct), \
void (*del)(void **ct));
t_glist	*ft_glstget(t_glist *start, int n);
t_glist	*ft_glstget2d(t_glist *start, int i, int j);
void	ft_glstiter(t_glist *lst, void (*f)(t_glist *elem));
t_glist	*ft_glstmap(t_glist *lst, t_glist *(*f)(t_glist *elem));
t_glist	*ft_glstnew(void *ct, void *(*new)(void *ct), void (*del)(void **ct));
void	ft_glstpush(t_glist **start, t_glist *link);

#endif /* !FT_GLSTS_H */
