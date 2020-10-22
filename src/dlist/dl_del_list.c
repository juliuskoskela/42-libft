/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dl_del_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 05:24:38 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		dl_del_list(t_dlist *ref)
{
	if (ref->next)
		dl_del_list(ref->next);
	free(ref);
}

/*
**  ----------------------------------------------------------------------------
**
**	Dl_del_list
**
**	Delete list.
**
**  ----------------------------------------------------------------------------
*/
