/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_set.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:31:58 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		*v_set(void *s, int c, uint64_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}

/*
**  ----------------------------------------------------------------------------
**
**	v_set
**
**	Void memory set; sets `n` bytes of memory pointed to by `s` with value `c`.
**
**  ----------------------------------------------------------------------------
*/
