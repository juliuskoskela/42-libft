/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_opp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:16:27 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/11 01:18:08 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_vct4		g_opp(t_vct4 v)
{
	return (g_vct4((v.x * -1), (v.y * -1), (v.z * -1), (v.w * -1)));
}