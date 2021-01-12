/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_rotx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:54:11 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/04 05:12:22 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_mtx4			g_rotx(double angle)
{
	t_mtx4		out;

	out.name = s_dup("X");
	out.v1 = g_vct4(1.0, 0.0, 0.0, 0.0);
	out.v2 = g_vct4(0.0, cos(m_rad(angle)), -sin(m_rad(angle)), 0.0);
	out.v3 = g_vct4(0.0, sin(m_rad(angle)), cos(m_rad(angle)), 0.0);
	out.v4 = g_vct4(0.0, 0.0, 0.0, 1.0);
	return (out);
}

// void			g_rotx(t_mtx4 *mtx, double angle)
// {
// 	mtx->this[0] = 1.0;
// 	mtx->this[5] = cos(m_rad(angle));
// 	mtx->this[6] = -sin(m_rad(angle));
// 	mtx->this[9] = sin(m_rad(angle));
// 	mtx->this[10] = cos(m_rad(angle));
// 	mtx->this[15] = 1.0;
// }

/*
**  ----------------------------------------------------------------------------
**
**	G_rotx
**
**	Create a rotation matrix of `angle` degrees in the x direction.
**
**  ----------------------------------------------------------------------------
*/
