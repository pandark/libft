/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnextline.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/21 14:06:35 by apachkof          #+#    #+#             */
/*   Updated: 2013/12/21 14:06:58 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include "libft.h"

static int	gnl_dried_file(t_str **read_buff, t_str **buff, t_str **line)
{
	if ((*read_buff)->l == 0)
	{
		ft_t_strdel(read_buff);
		if ((*buff)->l == 0)
			return (0);
		*line = ft_t_strdup(*buff);
		ft_memdel(&((*buff)->s));
		(*buff)->l = 0;
		return (1);
	}
	ft_t_strdel(read_buff);
	ft_t_strdel(buff);
	return (-1);
}

static int	gnl_filled_file(t_str **buff, t_str **read_buff)
{
	t_str			*swap;

	if (*buff == NULL)
	{
		*buff = ft_t_strdup(*read_buff);
		ft_t_strdel(read_buff);
		if (*buff == NULL)
			return (-1);
	}
	else
	{
		swap = ft_t_strjoin(*buff, *read_buff);
		ft_t_strdel(buff);
		ft_t_strdel(read_buff);
		if ((*buff = swap) == NULL)
			return (-1);
	}
	return (0);
}

int			ft_getnextline(int const fd, t_str **line)
{
	static t_str	*buff = NULL;
	t_str			*read_buff;

	if (line == NULL || 1 > BUFF_SIZE)
		return (-1);
	if ((read_buff = ft_t_strnew(NULL, 0)) == NULL)
		return (-1);
	while ((buff == NULL) || (*line = ft_t_strcutchr(buff, '\n')) == NULL)
	{
		read_buff = ft_t_strnew(NULL, BUFF_SIZE);
		if ((read_buff->l = read(fd, read_buff->s, BUFF_SIZE)) <= 0)
			return (gnl_dried_file(&read_buff, &buff, line));
		if ((gnl_filled_file(&buff, &read_buff)) == -1)
			return (-1);
	}
	return (1);
}
