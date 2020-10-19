/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_flddel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:22:28 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void		b_flddel(t_field *field)
{
	if (field)
	{
		if (field->row)
			free(field->row);
		free(field);
	}
}
