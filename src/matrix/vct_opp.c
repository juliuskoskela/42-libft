/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_opp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:30:21 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/20 19:39:26 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double			*vct_opp(double *vct, size_t size)
{
	double		*out;
	size_t		i;

	i = 0;
	out = (double *)v_alloc(sizeof(double) * size);
	while (i < size)
	{
		out[i] = vct[i] * (-1);
		i++;
	}
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	vct_opp
**
**	Calculate the opposite unit vector of `vct`.
**
**  ----------------------------------------------------------------------------
*/
