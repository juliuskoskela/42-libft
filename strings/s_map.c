/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_map.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:29:29 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:29:30 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_map(char const *s, char (*f)(char))
{
	unsigned int	n;
	char			*d;

	n = 0;
	d = (char *)malloc(sizeof(char) * (s_len(s)) + 1);
	if (d == NULL)
		return (NULL);
	while (s[n] != '\0')
	{
		d[n] = f(s[n]);
		n++;
	}
	d[n] = '\0';
	return (d);
}
