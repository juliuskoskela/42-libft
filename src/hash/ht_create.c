/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ht_create.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 20:00:55 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 00:29:48 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static t_dlist		**create_overflow_buckets(t_htable *table)
{
	int				i;
	t_dlist			**buckets;

	i = 0;
	buckets = (t_dlist **)v_alloc(sizeof(t_dlist *) * table->size);
	while (i < table->size)
	{
		buckets[i] = NULL;
		i++;
	}
	return (buckets);
}

t_htable			*ht_create(size_t (*hf)(char *), size_t size)
{
	int				i;
	t_htable		*table;

	i = 0;
	table = (t_htable *)v_alloc(sizeof(t_htable));
	table->size = size;
	table->count = 0;
	table->items = (t_hitem **)v_alloc(sizeof(t_hitem *) * table->size);
	table->hf = hf;
	while (i < table->size)
	{
		table->items[i] = NULL;
		i++;
	}
	table->overflow_buckets = create_overflow_buckets(table);
	return (table);
}

/*
**  ----------------------------------------------------------------------------
**
**	Ht_create
**
**	Create hash table of size `size`.
**
**  ----------------------------------------------------------------------------
*/
