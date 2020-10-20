/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_chr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:31:19 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 03:39:13 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void		*v_chr(const void *s, int c, uint64_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (((unsigned const char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned const char *)s)[i]);
		i++;
	}
	return (NULL);
}

/*
**  ----------------------------------------------------------------------------
**
**	V_chr
**
**	Void memory search; function locates the first occurrence of `c`
**	(converted to an unsigned char) in string `s`.
**
**	The `v_chr` function returns a pointer to the byte located, or NULL if
**	no such byte exists within `n` bytes.
**
**  ----------------------------------------------------------------------------
*/
