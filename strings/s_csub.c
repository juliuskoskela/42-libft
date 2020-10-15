/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_csub.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:24 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:47:06 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*s_csub(char *s, char c)
{
	char		*tmp;
	uint64_t	i;
	uint64_t	j;
	uint64_t	len;

	i = s_lento(s, c) + 1;
	j = 0;
	len = s_len(s) - i;
	tmp = s_new(len + 1);
	while (s[i])
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);
}
