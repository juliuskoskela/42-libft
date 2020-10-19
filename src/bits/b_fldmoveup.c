/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_fldmoveup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:23:54 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void		b_fldmoveup_1(t_field *field)
{
	uint64_t		i;

	i = 0;
	if (!field)
		return ;
	while (i < field->h - 1)
	{
		field->row[i] = field->row[i + 1];
		field->row[i + 1] = 0;
		i++;
	}
}

void			b_fldmoveup(t_field *field, uint64_t steps)
{
	while (steps)
	{
		b_fldmoveup_1(field);
		steps--;
	}
	field->y -= steps;
}
