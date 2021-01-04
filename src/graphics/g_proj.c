/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proj_mtx.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 02:21:55 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/31 18:47:14 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

// static void		print_method(t_camera *cam)
// {
// 	printf("## proj_mtx matrix\n\n");
// 	printf("We create a proj_mtx matrix to get a 2D representation.\n\n");
// 	printf("#### proj_mtx variables\n\n");
// 	printf("\\( ratio = %.2f \\) \n", cam->ratio);
// 	printf("\\( near = %.2f \\) \n", cam->near);
// 	printf("\\( far = %.2f \\) \n", cam->far);
// 	printf("\\( fov = %.2f\\degree \\) \n\n", cam->fov);
// 	printf("\\( P = (p_5 = 1 / tan(0.5 * fov)) + (p_0 = p_5 / ratio) + (p_10 = -1 * (-near - far) / (near - far)) + (p_11 = (2 * near * far) / (near - far)) + (p_14 = -1) + (p_15 = 0)) \\) \n\n");
// 	mtx_print(cam->proj_mtx);
// }

void			g_proj(t_mtx *mtx, double fv, double rt, int n, int f)
{
	mtx->this[5] = 1 / tan(0.5 * m_rad(fv));
	mtx->this[0] = mtx->this[5] / rt;
	mtx->this[10] = -1 * (-n - f) / (n - f);
	mtx->this[11] = (2 * n * f) / (n - f);
	mtx->this[14] = -1;
	mtx->this[15] = 0.0;
}

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
