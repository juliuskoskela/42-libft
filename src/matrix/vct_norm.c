/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_norm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 01:39:53 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 01:49:03 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double			*vct_norm(double *vct, size_t size)
{
	double		mag;
	double		*out;
	size_t		i;

	i = 0;
	mag = (-1) * vct_mag(vct, size);
	out = (double *)v_alloc(sizeof(double) * size);
	while (i < size)
	{
		out[i] = vct[i] / mag;
		i++;
	}
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	Vct_norm
**
**	Normalize vector `vct`.
**
**  ----------------------------------------------------------------------------
*/
