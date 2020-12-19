/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_delete.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 01:03:32 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/19 20:20:23 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void			free_item(t_hitem *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

static t_hitem		*create_item(char *key, char *value)
{
	t_hitem			*item;

	item = (t_hitem *)v_alloc(sizeof(t_hitem));
	item->key = (char *)v_alloc(sizeof(char) * s_len(key) + 1);
	item->value = (char *)v_alloc(sizeof(char) * s_len(value) + 1);
	s_cpy(item->key, key);
	s_cpy(item->value, value);
	return (item);
}

static void			free_t_dlist(t_dlist *list)
{
	t_hitem			*tmp;

	if (!list)
		return;
	while (list)
	{
		tmp = list->content;
		list = list->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		free(tmp);
	}
}

void				ht_delete(t_htable *table, char *key)
{
	int				index;
	t_hitem			*item;
	t_dlist			*head;
	t_dlist			*curr;
	t_dlist			*prev;
	t_dlist			*node;

	index = hash_function(key);
	item = table->items[index];
	head = table->overflow_buckets[index];
	if (item == NULL)
		return ;
	else
	{
		if (head == NULL && s_cmp(item->key, key) == 0)
		{
			table->items[index] = NULL;
			free_item(item);
			table->count--;
			return ;
		}
		else if (head != NULL)
		{
			if (s_cmp(item->key, key) == 0)
			{
				free_item(item);
				node = head;
				head = head->next;
				node->next = NULL;
				item = node->content;
				table->items[index] = create_item(item->key, item->value);
				free_t_dlist(node);
				table->overflow_buckets[index] = head;
				return ;
			}
			curr = head;
			prev = NULL;
			while (curr)
			{
				item = curr->content;
				if (s_cmp(item->key, key) == 0)
				{
					if (prev == NULL)
					{
						free_t_dlist(head);
						table->overflow_buckets[index] = NULL;
						return ;
					}
					else
					{
						prev->next = curr->next;
						curr->next = NULL;
						free_t_dlist(curr);
						table->overflow_buckets[index] = head;
						return ;
					}
				}
				curr = curr->next;
				prev = curr;
			}
		}
	}
}
