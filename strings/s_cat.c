/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_cat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:27:51 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:27:52 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_cat(char *s1, const char *s2)
{
	char	*dst;
	char	*src;

	dst = s1;
	src = (char *)s2;
	while (*dst)
		dst++;
	while (*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (s1);
}
