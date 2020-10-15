/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_lcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:29:04 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

uint64_t		s_lcat(char *dst, const char *src, uint64_t size)
{
	uint64_t	j;
	uint64_t	k;

	j = 0;
	k = 0;
	while (dst[j] && j < size)
		j++;
	while ((src[k]) && ((j + k + 1) < size))
	{
		dst[j + k] = src[k];
		k++;
	}
	if (j != size)
		dst[j + k] = '\0';
	return (j + s_len(src));
}
