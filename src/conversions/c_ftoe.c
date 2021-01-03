/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ftoe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 08:16:06 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/03 01:05:57 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char			*c_ftoe(double nbr)
{
	char		*out;
	char		*tmp;
	int			i;

	i = 0;
	while (nbr >= 10.0)
	{
		nbr /= 10;
		i++;
	}
	tmp = c_ftoa(nbr, 6);
	out = s_join_free(tmp, "e+0", 1);
	tmp = s_join_free(out, c_itoa_base(i, 10), 2);
	free(out);
	return (tmp);
}

/*
**  ----------------------------------------------------------------------------
**
**	C_ftoe
**
**	Convert double `nbr` into scientific notation in ascii.
**
**  ----------------------------------------------------------------------------
*/
