/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_atoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:25:03 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/20 09:45:24 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int				c_atoi(const char *str)
{
	int			i;
	int64_t		res;
	int64_t		negative;

	i = 0;
	res = 0;
	negative = 1;
	while (is_wspace(str[i]) == 1)
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (is_digit(str[i]) == 1)
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * negative);
}

/*
**  ----------------------------------------------------------------------------
**
**	C_atoi
**
**	Convert a string to an integer.
**
**  ----------------------------------------------------------------------------
*/
