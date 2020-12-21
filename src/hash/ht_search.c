/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:01:48 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/21 20:00:29 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				*ht_search(t_htable *table, char *key)
{
	size_t			index;
	t_hitem			*item;
	t_dlist			*head;

	index = table->hf(key);
	item = table->items[index];
	head = table->overflow_buckets[index];
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
