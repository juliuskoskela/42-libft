/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_cross.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 00:30:42 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/11 09:25:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_vct4			g_cross(t_vct4 a, t_vct4 b)
{
	t_vct4		out;

	out.x = (a.y * b.z) - (a.z * b.y);
	out.y = (a.z * b.x) - (a.x * b.z);
	out.z = (a.x * b.y) - (a.y * b.x);
	out.w = 1;
	return (out);
}
