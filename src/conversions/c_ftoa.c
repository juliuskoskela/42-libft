/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_ftoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 02:44:45 by jkoskela          #+#    #+#             */
/*   Updated: 2021/01/17 12:23:04 by jkoskela         ###   ########.fr       */
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

int				check_naninf(double nbr)
{
	if (nbr != nbr)
		return (1);
	if (nbr > 0x1.fffffffffffffp+1023)
		return (2);
	if (nbr == log(0))
		return (3);
	return (0);
}

char			*c_ftoa(double nbr, size_t p)
{
	uint64_t	integer;
	uint64_t	decimal;
	double		i;
	double		mantissa;
	char		*out;
	int			nan;

	i = 0;
	nan = check_naninf(nbr);
	if (nan == 1)
		return (s_dup("nan"));
	else if (nan == 2)
		return (s_dup("inf"));
	else if (nan == 3)
		return (s_dup("-inf"));
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
