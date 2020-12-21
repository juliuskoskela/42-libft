/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ftoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:44:45 by jkoskela          #+#    #+#             */
/*   Updated: 2020/12/21 20:00:08 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static char		*join(uint64_t decimal, uint64_t integer)
{
	char		*out;

	out = c_itoa_base(integer, 10);
	out = s_join_free(out, ".", 1);
	return (s_join_free(out, c_itoa_base(decimal, 10), 3));
}

char			*c_ftoa(double nbr, size_t p)
{
	uint64_t	integer;
	uint64_t	decimal;
	double		i;
	double		mantissa;
	char		*out;

	i = 0;
	out = c_itoa_base((int64_t)(nbr + 0.5), 10);
	if (p <= 1)
		return (s_join_free(out, ".0", 1));
	mantissa = m_fabs(m_modf(nbr, &i));
	decimal = (uint64_t)(m_pow(10, p) * mantissa + 0.5);
	integer = (uint64_t)(i);
	free(out);
	out = join(decimal, integer);
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
