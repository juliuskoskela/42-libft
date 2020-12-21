/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 03:38:33 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/21 18:49:32 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdio.h>

void				ht_print(t_htable *table)
{
	int				i;
	int				j;
	t_dlist			*head;
	t_hitem			*tmp;

	i = 0;
	j = 0;
	while (i < table->size)
	{
		if (table->items[i])
		{
			printf("[%d] = %s => %s\n", i, table->items[i]->key, \
			table->items[i]->value);
			head = table->overflow_buckets[i];
			while (head)
			{
				tmp = head->content;
				printf("[%d:%d] = %s => %s\n", i, j, tmp->key, tmp->value);
				head = head->next;
				j++;
			}
			j = 0;
		}
		i++;
	}
}
