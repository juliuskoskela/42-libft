/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_newc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 05:55:44 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/03 05:55:54 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char			*s_newc(size_t size, int c)
{
	char		*out;
	size_t		i;

	out = s_new(size);
	i = 0;
	while (i < size)
	{
		out[i] = c;
		i++;
	}
	return (out);
}
