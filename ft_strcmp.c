/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apachkof <apachkof@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:38:48 by apachkof          #+#    #+#             */
/*   Updated: 2013/11/21 15:33:37 by apachkof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	int		cur;

	cur = 0;
	while (s1[cur] != '\0' && s2[cur] != '\0')
	{
		if (s1[cur] != s2[cur])
		{
			return (s1[cur] - s2[cur]);
		}
		cur++;
	}
	return (s1[cur] - s2[cur]);
}

