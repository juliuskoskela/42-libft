/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_itoa_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:03:35 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char			*c_itoa_base(int64_t nbr, int64_t base)
{
	char		*str;
	int64_t		power;
	int64_t		i;
	int64_t		j;

	power = 1;
	i = 0;
	j = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while(nbr >= power * base)
	{
		power *= base;
		j++;
	}
	str = malloc(sizeof(str) * (i + j + 1));
	if (i)
		str[i - 1] = '-';
	while (power)
	{
		str[i] = (nbr / power) + (nbr / power > 9 ? 'A' - 10 : '0');
		nbr = nbr % power;
		power = power / base;
		i++;
	}
	str[i] = '\0';
	return (str);
}
