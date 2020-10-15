/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_bitoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:25:09 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:46:34 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*c_bitoa(uint64_t nb, uint64_t len)
{
	uint64_t	i;
	char		*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	while (i < len)
	{
		if (b_checknth(nb, i) == 1)
			str[i] = '1';
		else
			str[i] = '0';
		i++;
	}
	return (str);
}
