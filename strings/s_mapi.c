/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_mapi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:29:34 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:29:35 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_mapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*d;

	n = 0;
	d = (char *)malloc(sizeof(char) * (s_len(s)) + 1);
	if (d == NULL)
		return (NULL);
	while (s[n] != '\0')
	{
		d[n] = f(n, s[n]);
		n++;
	}
	d[n] = '\0';
	return (d);
}
