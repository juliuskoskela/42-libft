/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bf_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 14:22:11 by jkoskela          #+#    #+#             */
/*   Updated: 2020/09/24 01:49:06 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		bf_clear(t_field *field)
{
	size_t	i;

	i = 0;
	if (field)
		return ;
	while (i < field->h)
	{
		field->row[i] = 0;
		i++;
	}
	field->x = 0;
	field->y = 0;
}
