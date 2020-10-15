/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_dup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:28:35 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:47:01 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*s_dup(const char *s1)
{
	char		*str;
	uint64_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * s_len(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
