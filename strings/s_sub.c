/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_sub.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:30:41 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:47:25 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*s_sub(char const *s, unsigned int start, uint64_t len)
{
	char		*d;
	uint64_t	i;

	i = 0;
	if (!s)
		return (NULL);
	d = (char *)malloc(sizeof(char) * len + 1);
	if (!d)
		return (NULL);
	while (i < len)
	{
		d[i] = s[start + i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
