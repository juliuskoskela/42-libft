/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ctoc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 05:54:35 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/03 05:54:47 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void			s_ctoc(char *str, int from, int to)
{
	size_t		i;

	i = s_len(str);
	while (i--)
	{
		if (str[i] == from)
			str[i] = to;
	}
}
