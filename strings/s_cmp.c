/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cmp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:12 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:28:13 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			s_cmp(const char *s1, const char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
