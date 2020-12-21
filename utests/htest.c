/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htest.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 10:58:29 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/21 17:17:02 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libft.h"

int				main()
{
	t_htable	*tab;
	char		*data;
	char		*data2;
	char		*data3;
	char		*data4;

	tab = ht_create(&hash_function, CAPACITY);
	data = "THIS IS JULIUS";
	data2 = "THIS IS KATYA";
	data3 = "THIS IS SATU";
	data4 = "THIS IS JANI";
	ht_insert(tab, "jkoskela", data, sizeof(char) * s_len(data) + 1);
	ht_insert(tab, "esukava", data, sizeof(char) * s_len(data) + 1);
	ht_insert(tab, "eprusako", data2, sizeof(char) * s_len(data) + 1);;
	ht_insert(tab, "skoskine", data3, sizeof(char) * s_len(data3) + 1);
	ht_insert(tab, "jsankari", data4, sizeof(char) * s_len(data4) + 1);
	ht_insert(tab, "ksuomala", data, sizeof(char) * s_len(data) + 1);
	char *res;

	res = ht_search(tab, "jkoskela");
	p_str(res);
	p_char('\n');
	// res = ht_search(tab, "eprusako");
	// p_str(res);
	// p_char('\n');
	// ht_delete(tab, "skoskine");

	// res = ht_search(tab, "skoskine");
	// if (res)
	// 	p_str(res);
	// else
	// 	p_str("NF");
	p_char('\n');
	ht_print(tab);
	return (0);
}