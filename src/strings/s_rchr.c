/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_rchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:30:21 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char		*s_rchr(const char *s, int c)
{
	int		i;

	i = s_len(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
