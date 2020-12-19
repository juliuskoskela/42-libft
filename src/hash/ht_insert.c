/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:01:14 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/19 03:32:11 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void				free_item(t_hitem *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

static t_hitem		*create_item(char *key, char *value)
{
	t_hitem			*item;

	item = (t_hitem *) malloc (sizeof(t_hitem));
	item->key = (char *) calloc (s_len(key) + 1, sizeof(char));
	item->value = (char *) calloc (s_len(value) + 1, sizeof(char));
	s_cpy(item->key, key);
	s_cpy(item->value, value);
	return (item);
}

static t_dlist		*allocate_list()
{
	t_dlist			*list;

	list = (t_dlist *)calloc(1, sizeof(t_dlist));
	return list;
}

static void			collision(t_htable *table, uint64_t i, t_hitem *item)
{
	t_dlist			*head;

	head = table->overflow_buckets[i];
	if (head == NULL)
	{
		head = allocate_list();
		head->content = item;
		table->overflow_buckets[i] = head;
		return ;
	}
	else
	{
		dl_putlast(&table->overflow_buckets[i], item);
		return ;
	}
 }

void				ht_insert(t_htable *table, char *key, char *value)
{
	int				i;
	t_hitem			*item;
	t_hitem			*current_item;

	i = hash_function(key);
	item = create_item(key, value);
	current_item = table->items[i];
	if (current_item == NULL)
	{
		if (table->count == table->size)
		{
			p_str("Insert Error: Hash Table is full\n");
			free_item(item);
			return ;
		}
		table->items[i] = item;
		table->count++;
	}
	else
	{
		if (s_cmp(current_item->key, key) == 0)
		{
			free(table->items[i]->value);
			table->items[i]->value = (char*)calloc(s_len(value) + 1, \
														 sizeof(char));
			s_cpy(table->items[i]->value, value);
			free_item(item);
			return ;
		}
		else
		{
			collision(table, i, item);
			return ;
		}
	}
}
