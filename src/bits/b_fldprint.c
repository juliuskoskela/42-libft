/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_fldprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:24:20 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void		b_fldprint1(uint64_t *field, uint64_t w, uint64_t h)
{
	uint64_t		i;

	i = 0;
	while (i < h)
	{
		p_bits(field[i], w);
		write(1, "\n", 1);
		i++;
	}
}

void			b_fldprint(t_field *field)
{
	if (!field)
		return ;
	b_fldprint1(field->row, field->w, field->h);
}
