/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_transpose.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:34:58 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:36:30 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			mtx_transpose(t_mtx *mtx, t_mtx *src)
{
	double		*row;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
	mtx_clear(mtx);
	row = (double *)v_alloc(sizeof(double) * src->y);
	while (i < mtx->y)
	{
		mtx_get_col(row, src, i);
		while (j < mtx->x)
		{
			mtx->this[k] = row[j];
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	free(row);
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_transpose
**
**	Transopse matrix `src` and write the result in a previously allocated
**	matrix `mtx`.
**
**  ----------------------------------------------------------------------------
*/
