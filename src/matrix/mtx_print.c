/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:01:10 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:40:35 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			mtx_print(t_mtx *mtx)
{
	size_t		i;
	size_t		j;
	size_t		r;

	i = 0;
	j = 0;
	r = 0;
	printf("%s  ", mtx->name);
	while (i < mtx->x)
		printf("|  c%zu   ", i++);
	i = 0;
	printf("\n---");
	while (i < mtx->x)
	{
		printf("|-------");
		i++;
	}
	i = 0;
	printf("\nr%zu ", r);
	while (i < mtx->x * mtx->y)
	{
		if (j == mtx->x)
		{
			printf("\n");
			r++;
			printf("r%zu ", r);
			j = 0;
		}
		printf("| %5.2f ", mtx->this[i++]);
		j++;
	}
	printf("\n");
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_print
**
**	Formatted printing algorithm for a matrix. Markdown compliant output.
**
**  ----------------------------------------------------------------------------
*/
