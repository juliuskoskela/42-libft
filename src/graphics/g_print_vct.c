/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_print_vct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 06:09:12 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/11 06:37:48 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		g_print_vct(t_vct4 vct, size_t index)
{
	printf("v%zu  %.1f  %.1f  %.1f  %.1f\n", index, vct.x, vct.y, vct.z, vct.w);
}
