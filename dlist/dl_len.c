/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 14:59:00 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:47:41 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

uint64_t		dl_len(t_dlist *node)
{
	t_dlist		*tmp;
	uint64_t	i;

	tmp = node;
	i = 0;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
