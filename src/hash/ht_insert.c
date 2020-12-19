/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:01:14 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/19 04:26:48 by jkoskela         ###   ########.fr       */
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

	item = (t_hitem *)v_alloc(sizeof(t_hitem));
	item->key = s_new(s_len(key) + 1);
	item->value = s_new(s_len(value) + 1);
	s_cpy(item->key, key);
	s_cpy(item->value, value);
	return (item);
}

static void			collision(t_htable *table, uint64_t i, t_hitem *item)
{
	t_dlist			*head;

	head = table->overflow_buckets[i];
	if (head == NULL)
	{
		head = (t_dlist *)v_alloc(sizeof(t_dlist));
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

int				ht_insert(t_htable *t, char *key, char *v)
{
	int				i;
	t_hitem			*item;
	t_hitem			*current_item;

	i = hash_function(key);
	item = create_item(key, v);
	current_item = t->items[i];
	if (current_item == NULL)
	{
		if (t->count == t->size)
		{
			free_item(item);
			return (-1);
		}
		t->items[i] = item;
		t->count++;
	}
	else
	{
		if (s_cmp(current_item->key, key) == 0)
		{
			free(t->items[i]->value);
			t->items[i]->value = (char *)v_alloc(sizeof(char) * s_len(v) + 1);
			s_cpy(t->items[i]->value, v);
			free_item(item);
		}
		else
			collision(t, i, item);
	}
	return(1);
}
