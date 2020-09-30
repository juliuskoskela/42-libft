/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_putbefore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 15:01:17 by jkoskela          #+#    #+#             */
/*   Updated: 2020/09/24 01:51:28 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		dl_putbefore(t_dlist **ref, t_dlist *next, void *new)
{
	t_dlist	*new_node;

	if (next == NULL)
		return ;
	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	new_node->content = new;
	new_node->prev = next->prev;
	next->prev = new_node;
	new_node->next = next;
	if (new_node->prev != NULL)
		new_node->prev->next = new_node;
	else
		(*ref) = new_node;
}
