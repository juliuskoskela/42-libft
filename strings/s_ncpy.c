/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ncpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:29:53 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_ncpy(char *dst, const char *src, uint64_t n)
{
	uint64_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
