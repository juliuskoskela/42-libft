/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_atonb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:42:11 by esukava           #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

uint64_t		b_atonb(char *str, char c, uint64_t size)
{
	uint64_t	i;
	uint64_t	nb;

	i = 0;
	nb = 0;
	while (i < size)
	{
		if (str[i] == c)
			nb |= 1 << i;
		if (str[i] != '\n')
			i++;
	}
	return (nb);
}
