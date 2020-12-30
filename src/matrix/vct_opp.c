/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_opp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:30:21 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:32:48 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double			*vct_opp(double *vct)
{
	double		mag;
	double		*out;

	mag = -1 * vct_mag(vct);
	out = (double *)v_alloc(sizeof(double) * 3);
	out[0] = vct[0] / mag;
	out[1] = vct[1] / mag;
	out[2] = vct[2] / mag;
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
