/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:05:55 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 14:07:45 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#ifndef LIBFT_H
# define LIBFT_H

typedef enum		e_bool
{
	false,
	true
}					t_bool;

typedef struct		s_str
{
	char			*s;
	size_t			l;
}					t_str;

typedef struct		s_glist
{
	void			*content;
	struct s_glist	*next;
}					t_glist;

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
t_bool	ft_isspace(int c);
t_bool	ft_isalnum(int c);
t_bool	ft_isalpha(int c);
t_bool	ft_isascii(int c);
t_bool	ft_isdigit(int c);
t_bool	ft_isprint(int c);
char	*ft_memnew(size_t size);
void	*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memcpy_bwd(void *s1, const void *s2, size_t n);
void	*ft_memmove(void *s1, const void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *s1, const char *s2);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
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
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **link, void (*del)(void *, size_t));
void	ft_lstdel(t_list **link, void (*del)(void *, size_t));
void	ft_lstadd(t_list **start, t_list *link);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
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
int		ft_getnextline(int const fd, t_str **line);

#endif /* !LIBFT_H */
