/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_norm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:11:51 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/11 09:21:46 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_vct4			g_norm(t_vct4 v)
{
	double		mag;
	t_vct4		out;

	mag = (-1) * g_mag(v);
	out = g_vct4((v.x / mag), (v.y / mag), (v.z / mag), (v.w / mag));
	return (out);
}
