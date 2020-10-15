/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_nequ.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:30:04 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			s_nequ(char const *s1, char const *s2, uint64_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (!s_ncmp(s1, s2, n))
		return (1);
	return (0);
}
