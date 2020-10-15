/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_ccpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:31:12 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		*v_ccpy(void *dst, const void *src, int c, uint64_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (n != 0)
	{
		*dest2 = *src2;
		if (*src2 == (unsigned char)c)
			return (dest2 + 1);
		dest2++;
		src2++;
		n--;
	}
	return (NULL);
}
