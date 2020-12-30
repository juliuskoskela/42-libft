/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtx_arr_multiply.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 00:32:16 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 00:35:24 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int			mtx_arr_multiply(t_mtx *mtx, t_mtx **arr, size_t size)
{
	if (size == 1)
		return (1);
	if (mtx_multiply(mtx, arr[size - 1], arr[size - 2]))
		mtx_arr_multiply(mtx, arr, size - 1);
	return (-1);
}

/*
**  ----------------------------------------------------------------------------
**
**	Mtx_arr_multiply
**
**	Multiply an array of matrices in a decending order. Put the result
**	in an allocated array 'mtx`.
**
**  ----------------------------------------------------------------------------
*/
