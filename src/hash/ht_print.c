/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 03:38:33 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/21 17:16:08 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdio.h>

void				ht_print(t_htable *table)
{
	int				i;
	t_dlist			*head;
	t_hitem			*tmp;

	i = 0;
	head = table->overflow_buckets[i];
	while (i < table->size)
	{
		if (table->items[i])
		{
			printf("[%d] = %s => %s", i, table->items[i]->key, table->items[i]->value);
			while (head)
			{
				tmp = head->content;
				printf("Key:%s, Value:%s ", tmp->key, tmp->value);
				head = head->next;
			}
			printf("\n");
		}
		i++;
	}
}
