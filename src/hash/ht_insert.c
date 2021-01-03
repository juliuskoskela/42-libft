/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:01:14 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 00:36:15 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void			free_item(t_hitem *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

static t_hitem		*create_item(char *key, void *val, size_t bt)
{
	t_hitem			*item;

	item = (t_hitem *)v_alloc(sizeof(t_hitem));
	item->key = s_dup(key);
	item->value = (void *)v_alloc(sizeof(void));
	item->value = v_move(item->value, val, bt);
	item->bytes = bt;
	return (item);
}

int					ht_insert(t_htable *tab, char *key, void *val, size_t bt)
{
	size_t			i;
	t_hitem			*item;
	t_hitem			*current_item;

	item = create_item(key, val, bt);
	i = tab->hf(key);
	current_item = tab->items[i];
	if (current_item == NULL)
	{
		if (tab->count == tab->size)
		{
			free_item(item);
			return (-1);
		}
		tab->items[i] = item;
		tab->count++;
	}
	else
	{
		if (s_cmp(current_item->key, key) == 0)
		{
			free(tab->items[i]->value);
			tab->items[i]->value = (void *)v_alloc(sizeof(size_t) * bt);
			tab->items[i]->value = v_move(tab->items[i]->value, val, bt);
			free_item(item);
		}
		else
			dl_putlast(&tab->overflow_buckets[i], item);
	}
	return (1);
}

/*
**  ----------------------------------------------------------------------------
**
**	Ht_insert
**
**	Insert value `val` into hash table `tab` with the key value of `key`.
**	Bt is the size of the data in `val`.
**
**  ----------------------------------------------------------------------------
*/
