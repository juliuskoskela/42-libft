/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 03:38:33 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 01:15:19 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void				ht_print(t_htable *tab)
{
	int				i;
	int				j;
	t_dlist			*head;
	t_hitem			*tmp;

	i = 0;
	j = 0;
	while (i < tab->size)
	{
		if (tab->items[i])
		{
			printf("[%d] = %s => %s\n", i, tab->items[i]->key, \
			tab->items[i]->value);
			head = tab->overflow_buckets[i];
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

/*
**  ----------------------------------------------------------------------------
**
**	Ht_print
**
**	Printt hash table `tab`.
**
**  ----------------------------------------------------------------------------
*/
