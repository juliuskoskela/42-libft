/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_iter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:46 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		s_iter(char *s, void (*f)(char *))
{
	unsigned int	n;

	n = 0;
	while (s[n] != '\0')
	{
		f(s + n);
		n++;
	}
}

/*
**  ----------------------------------------------------------------------------
**
**	S_iter
**
**	Perform function `f` (that takes an argument of type `char *`) passed as
**	a function pointer on all elements of string `s`.
**
**  ----------------------------------------------------------------------------
*/
