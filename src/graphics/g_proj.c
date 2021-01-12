/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_proj.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:21:55 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 18:47:14 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_mtx4			g_proj(double fv, double rt, int n, int f)
{
	t_mtx4		out;

	out.name = s_dup("P");
	out.v2 = g_vct4(0.0, 1 / tan(0.5 * m_rad(fv)), 0.0, 0.0);
	out.v1 = g_vct4(out.v2.y / rt, 0.0, 0.0, 0.0);
	out.v3 = g_vct4(0.0, 0.0, -1 * (-n - f) / (n - f), (2 * n * f) / (n - f));
	out.v4 = g_vct4(0.0, 0.0, -1.0, 0.0);
	return (out);
}

// void			g_proj(t_mtx *mtx, double fv, double rt, int n, int f)
// {
// 	mtx->this[5] = 1 / tan(0.5 * m_rad(fv));
// 	mtx->this[0] = mtx->this[5] / rt;
// 	mtx->this[10] = -1 * (-n - f) / (n - f);
// 	mtx->this[11] = (2 * n * f) / (n - f);
// 	mtx->this[14] = -1;
// 	mtx->this[15] = 0.0;
// }

// convert to screen space
// Vec2f P_screen;
// P_screen.x = near * P_camera.x / -P_camera.z;
// P_screen.y = near * P_camera.y / -P_camera.z;

// now convert point from screen space to NDC space (in range [-1, 1])
// Vec3f P_ndc;
// P_ndc.x = 2 * P_screen.x / (r - l) - (r + l) / (r - l);
// P_ndc.y = 2 * P_screen.y / (t - b) - (t + b) / (t - b);

/*
**  ----------------------------------------------------------------------------
**
**	G_proj
**
**	3D to 2D projection matrix.
**	`fv` = field of view in degrees
**	`rt` = ratio (for example 16 / 9)
**	`n` = nearest pixel to the camera to be rendered
**	`f` = furthest pixel to the camera to be rendered
**
**  ----------------------------------------------------------------------------
*/
