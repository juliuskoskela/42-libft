/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:03:32 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/21 17:01:03 by jkoskela         ###   ########.fr       */
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

static void			*free_t_dlist(t_dlist *list)
{
	t_hitem			*tmp;

	if (!list)
		return (NULL);
	while (list)
	{
		tmp = list->content;
		list = list->next;
		free_item(tmp);
	}
	return (NULL);
}

static int			del_bucket(t_htable *tab, t_hitem *item, char *key, size_t index)
{
	t_dlist			*head;
	t_dlist			*node;

	head = tab->overflow_buckets[index];
	if (s_cmp(item->key, key) == 0)
	{
		free_item(item);
		node = head;
		head = head->next;
		node->next = NULL;
		item = node->content;
		tab->items[index] = create_item(item->key, item->value, item->bytes);
		free_t_dlist(node);
		tab->overflow_buckets[index] = head;
		return (1);
	}
	while (head)
	{
		item = head->content;
		if (s_cmp(item->key, key) == 0)
		{
			if (head->prev == NULL)
				tab->overflow_buckets[index] = free_t_dlist(head);
			else
			{
				head->prev->next = head->next;
				head->next = free_t_dlist(head);
				tab->overflow_buckets[index] = head;
			}
			return (1);
		}
		head = head->next;
	}
	return (-1);
}

void				ht_delete(t_htable *tab, char *key)
{
	size_t			index;
	t_hitem			*item;
	t_dlist			*head;

	index = tab->hf(key);
	item = tab->items[index];
	head = tab->overflow_buckets[index];
	if (item == NULL)
		return ;
	if (head == NULL && s_cmp(item->key, key) == 0)
	{
		tab->items[index] = NULL;
		free_item(item);
		tab->count--;
		return ;
	}
	else if (head != NULL)
		del_bucket(tab, item, key, index);
}
