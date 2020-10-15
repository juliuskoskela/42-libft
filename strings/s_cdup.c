/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:27:56 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:47:11 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*s_cdup(const char *s1, char c)
{
	char		*str;
	uint64_t	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * s_len(s1) + 1);
	if (str == NULL)
		return (NULL);
	while (s1[i] && s1[i] != c)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
