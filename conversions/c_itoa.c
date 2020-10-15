/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_itoa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:25:17 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/16 01:25:18 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*c_itoa(int n)
{
	char	*str;
	int		size;
	int		sign;

	size = m_intlen(n);
	sign = is_neg(n);
	str = (char *)v_alloc(size + 1 + sign);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (s_cpy(str, "-2147483648"));
	if (n < 0)
	{
		str[0] = '-';
		size++;
		n = n * -1;
	}
	while (size - sign)
	{
		str[size - 1] = 48 + n % 10;
		n = n / 10;
		size--;
	}
	return (str);
}
