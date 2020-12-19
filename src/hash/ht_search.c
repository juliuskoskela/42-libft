/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:01:48 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/19 03:30:14 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char				*ht_search(t_htable *table, char *key)
{
	int				index;
	t_hitem			*item;
	t_dlist			*head;

	index = hash_function(key);
	item = table->items[index];
	head = table->overflow_buckets[index];
	while (item != NULL)
	{
		if (s_cmp(item->key, key) == 0)
			return item->value;
		if (head == NULL)
			return (NULL);
		item = head->content;
		head = head->next;
	}
	return (NULL);
}
