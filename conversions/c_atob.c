/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_atob.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 19:17:32 by esukava           #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

uint64_t		c_atob(char *str)
{
	uint64_t	i;
	uint64_t	size;
	uint64_t	nb;

	i = 0;
	nb = 0;
	size = s_len(str);
	while (i < size)
	{
		if (str[i] == '1')
			nb |= 1 << i;
		if (str[i] != '1' && str[i] != '0')
			return (0);
		i++;
	}
	return (nb);
}
