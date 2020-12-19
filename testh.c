/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/19 02:44:05 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/19 04:06:11 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int main()
{
	t_htable *table = ht_create(CAPACITY);
	ht_insert(table, "Vtx1", "10.3.7");
	ht_insert(table, "Vtx2", "5.6.7");
	ht_insert(table, "Vtx3", "9.1.7");
	ht_insert(table, "Vtx4", "2.3.4");
	char *out = ht_search(table, "Vtx4");
	if (out)
		p_str(out);
	ht_print(table);
}