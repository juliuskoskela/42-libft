/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:57 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:28:58 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_join(char const *s1, char const *s2)
{
	char	*d;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		d = s_dup(s2);
	if (!s2)
		d = s_dup(s1);
	if (s1 && s2)
	{
		d = s_new(s_len(s1) + s_len(s2) + 1);
		d = s_cpy(d, s1);
		d = s_cat(d, (char *)s2);
	}
	return (d);
}
