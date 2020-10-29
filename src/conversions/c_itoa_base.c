/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_itoa_base.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 22:03:35 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/29 01:32:30 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char			*c_itoa_base(uint64_t nb, uint64_t base)
{
	size_t		i;
	char		*out;
	char		*tab;

	i = 0;
	out = s_new(m_digits_base(nb, base) + 1);
	tab = "0123456789abcdef";
	if (base > 16 || base < 2)
		return (NULL);
	while (nb > base)
	{
		out[i] = tab[nb % base];
		nb = nb / base;
		i++;
	}
	out[i] = tab[nb % base];
	out[i + 1] = '\0';
	return (s_rev(out));
}

/*
**  ----------------------------------------------------------------------------
**
**	C_itoa_base
**
**	Convert `nb` base 10 converted to a string of characters in base `base`.
**
**  ----------------------------------------------------------------------------
*/