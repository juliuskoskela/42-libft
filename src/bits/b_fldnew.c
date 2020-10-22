/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_fldnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:24:00 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_field			*b_fldnew(uint64_t w, uint64_t h)
{
	t_field		*newfield;

	newfield = (t_field *)malloc(sizeof(t_field));
	newfield->row = b_fldinit(h);
	newfield->w = w;
	newfield->h = h;
	newfield->bw = 0;
	newfield->bh = 0;
	newfield->x = 0;
	newfield->y = 0;
	return (newfield);
}
