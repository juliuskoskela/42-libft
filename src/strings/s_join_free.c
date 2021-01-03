/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:05:39 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 00:19:35 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*s_join_free(char *s1, char *s2, size_t flag)
{
	char	*out;

	out = s_join(s1, s2);
	if (flag == 1)
		free(s1);
	else if (flag == 2)
		free(s2);
	else if (flag == 3)
	{
		free(s1);
		free(s2);
	}
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	S_join_free
**
**	Join strings `s1` and `s2`. Frees the string referred to by `flag`.
**
**	0 = no free
**	1 = `s1` is freed
**	2 = `s2` is freed
**	3 = both strings are freed
**
**	Returns a memory allocated output `out`.
**
**  ----------------------------------------------------------------------------
*/
