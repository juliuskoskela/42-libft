/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ftoe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 08:16:06 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/02 08:16:15 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char			*c_ftoe(double nbr)
{
	char		*out;
	int			i;

	i = 0;
	while (nbr >= 10.0)
	{
		nbr /= 10;
		i++;
	}
	out = c_ftoa(nbr, 6);
	out = s_join(out, "e+0");
	return (s_join(out, c_itoa(i)));
}
