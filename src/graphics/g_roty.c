/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_roty.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:54:28 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/04 05:12:22 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			g_roty(t_mtx *mtx, double angle)
{
	mtx->this[0] = cos(m_rad(angle));
	mtx->this[2] = sin(m_rad(angle));
	mtx->this[5] = 1.0;
	mtx->this[8] = -sin(m_rad(angle));
	mtx->this[10] = cos(m_rad(angle));
	mtx->this[15] = 1.0;
}

/*
**  ----------------------------------------------------------------------------
**
**	G_roty
**
**	Create a rotation matrix of `angle` degrees in the y direction.
**
**  ----------------------------------------------------------------------------
*/
