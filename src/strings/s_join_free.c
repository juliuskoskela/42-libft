/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_join_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:05:39 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/04 01:08:31 by jkoskela         ###   ########.fr       */
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
