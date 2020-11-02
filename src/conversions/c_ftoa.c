/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ftoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:44:45 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/02 07:39:03 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char		*c_ftoa(double nbr, size_t p)
{
	uint64_t	integer;
	uint64_t	decimal;
	double		i;
	double		mantissa;
	char		*out;

	i = 0;
	if (p <= 1)
		return (s_join(c_itoa((int64_t)(nbr + 0.5)), ".0"));
	mantissa = m_modf(nbr, &i);
	decimal = (uint64_t)(m_pow(10, p) * mantissa + 0.5);
	integer = (uint64_t)(i);
	out = c_itoa(integer);
	out = s_join(out, ".");
	out = s_join(out, c_itoa(decimal));
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	C_ftoa
**
**	Convert double `nbr` to a string of characters with decimal precision `p`.
**
**  ----------------------------------------------------------------------------
*/
