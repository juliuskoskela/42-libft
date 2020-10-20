/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_del_node_at.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 15:06:51 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 09:52:16 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void			dl_del_node_at(t_dlist **ref, uint64_t pos)
{
	t_dlist		*current;
	uint64_t	i;

	if (*ref == NULL || pos <= 0)
		return ;
	current = *ref;
	i = 1;
	while (current != NULL && i < pos)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
		return ;
	dl_del_node(ref, current);
}

/*
**  ----------------------------------------------------------------------------
**
**	Dll_del_node_at
**
**	Delete node in position `pos`.
**
**  ----------------------------------------------------------------------------
*/
