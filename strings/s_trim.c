/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_trim.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:30:47 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:30:48 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*s_trim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*str;

	i = 0;
	k = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (s[i] == '\0')
		return (s_cpy(v_alloc(sizeof(char) * 2), ""));
	j = s_len(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		str[k] = s[i + k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
