/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:01:48 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 00:33:01 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ht_search(t_htable *tab, char *key)
{
	size_t			index;
	t_hitem			*item;
	t_dlist			*head;

	index = tab->hf(key);
	item = tab->items[index];
	head = tab->overflow_buckets[index];
	while (item != NULL)
	{
		if (s_cmp(item->key, key) == 0)
			return (item->value);
		if (head == NULL)
			return (NULL);
		item = head->content;
		head = head->next;
	}
	return (NULL);
}

/*
**  ----------------------------------------------------------------------------
**
**	Ht_search
**
**	Search hash item of value `key` from the table `tab`.
**
**  ----------------------------------------------------------------------------
*/
