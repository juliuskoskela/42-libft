/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_floor.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 22:05:32 by jkoskela          #+#    #+#             */
/*   Updated: 2020/11/02 01:30:24 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

double			m_floor(double x)
{
	double		xcopy;
	int64_t	zeros;
	double		n;

	xcopy = x < 0 ? x * -1 : x;
	zeros = 0;
	n = 1;
	while (xcopy > n * 10)
	{
		n *= 10;
		++zeros;
	}
	while (zeros != -1)
	{
		xcopy -= n;
		if (xcopy < 0)
		{
			xcopy += n;
			n /= 10;
			--zeros;
		}
	}
	if (x < 0)
		return (xcopy == 0 ? x : x - (1 - xcopy));
	else
		return (x - xcopy);
}

/*
**  ----------------------------------------------------------------------------
**
**	M__floor
**
**	Ceiling function maps to the least integer less than or equal to.
**
**  ----------------------------------------------------------------------------
*/
