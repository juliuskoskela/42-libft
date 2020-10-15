/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ndup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:29:59 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:43:12 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_ndup(const char *s, uint64_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * n + 1);
	if (str == NULL)
		return (NULL);
	str = s_ncpy(str, s, n);
	str[n] = '\0';
	return (str);
}
