/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_multiply.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:11:35 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/04 03:15:33 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int			mtx_multiply(t_mtx *mtx, t_mtx *a, t_mtx *b)
{
	double		*row;
	double		*col;
	size_t		i;
	size_t		j;
	size_t		k;

	i = 0;
	j = 0;
	k = 0;
	row = (double *)v_alloc(sizeof(double) * a->x);
	col = (double *)v_alloc(sizeof(double) * b->y);
	if (a->x != b->y || !a || !b)
		return (-1);
	while (i < mtx->x * mtx->y)
	{
		if (k == mtx->x)
		{
			k = 0;
			j++;
		}
		mtx_get_row(row, a, j);
		mtx_get_col(col, b, k);
		mtx->this[i] = vct_dot(row, col, a->x);
		i++;
		k++;
	}
	free(row);
	free(col);
	return (1);
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_multiply
**
**	Multiply `a * b`. Store the result in an allocated matrix `mtx` passed
**	as a parameter.
**
**  ----------------------------------------------------------------------------
*/
