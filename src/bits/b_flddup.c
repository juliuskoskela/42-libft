/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_flddup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:23:01 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_field			*b_flddup(t_field *src)
{
	t_field		*dest;
	uint64_t	i;

	i = 0;
	dest = b_fldnew(src->w, src->h);
	while (i < src->h)
	{
		dest->row[i] = src->row[i];
		i++;
	}
	return (dest);
}
