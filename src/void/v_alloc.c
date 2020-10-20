/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_alloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:30:56 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 03:25:23 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void		*v_alloc(uint64_t size)
{
	void	*p;

	p = malloc(size);
	if (p)
		v_bzero(p, size);
	return (p);
}

/*
**  ----------------------------------------------------------------------------
**
**	V_alloc
**
**	Void memory allocation; allocates `size` bytes of memory and initializes
**	the memory.
**
**  ----------------------------------------------------------------------------
*/
