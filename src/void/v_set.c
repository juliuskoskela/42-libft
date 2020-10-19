/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v_set.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:31:58 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 02:52:17 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void		*v_set(void *s, int c, uint64_t n)
{
	unsigned char *ptr;

	ptr = s;
	while (n)
	{
		*ptr = c;
		ptr++;
		n--;
	}
	return (s);
}