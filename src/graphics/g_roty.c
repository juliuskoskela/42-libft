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

t_mtx4			g_roty(double angle)
{
	t_mtx4		out;

	out.name = s_dup("Y");
	out.v1 = g_vct4(cos(m_rad(angle)), 0.0, sin(m_rad(angle)), 0.0);
	out.v2 = g_vct4(0.0, 1.0, 0.0, 0.0);
	out.v3 = g_vct4(-sin(m_rad(angle)), 0.0, cos(m_rad(angle)), 0.0);
	out.v4 = g_vct4(0.0, 0.0, 0.0, 1.0);
	return (out);
}

// void			g_roty(t_mtx4 *mtx, double angle)
// {
// 	mtx->this[0] = cos(m_rad(angle));
// 	mtx->this[2] = sin(m_rad(angle));
// 	mtx->this[5] = 1.0;
// 	mtx->this[8] = -sin(m_rad(angle));
// 	mtx->this[10] = cos(m_rad(angle));
// 	mtx->this[15] = 1.0;
// }

/*
**  ----------------------------------------------------------------------------
**
**	G_roty
**
**	Create a rotation matrix of `angle` degrees in the y direction.
**
**  ----------------------------------------------------------------------------
*/
