/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_nstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:30:15 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char		*s_nstr(const char *h, const char *n, uint64_t len)
{
	uint64_t	i;
	uint64_t	j;

	i = 0;
	if (!s_len(n))
		return ((char *)h);
	while (i < len && h[i] != '\0')
	{
		j = 0;
		while (i + j < len && h[i + j] == n[j] && n[j] != '\0')
			j++;
		if (n[j] == '\0')
			return ((char *)h + i);
		i++;
	}
	return (NULL);
}
