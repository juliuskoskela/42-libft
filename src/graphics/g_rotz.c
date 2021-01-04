/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_rotz.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 17:54:49 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/04 05:12:22 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			g_rotz(t_mtx *mtx, double angle)
{
	mtx->this[0] = cos(m_rad(angle));
	mtx->this[1] = -sin(m_rad(angle));
	mtx->this[4] = sin(m_rad(angle));
	mtx->this[5] = cos(m_rad(angle));
	mtx->this[10] = 1.0;
	mtx->this[15] = 1.0;
}

/*
**  ----------------------------------------------------------------------------
**
**	G_rotz
**
**	Create a rotation matrix of `angle` degrees in the z direction.
**
**  ----------------------------------------------------------------------------
*/
