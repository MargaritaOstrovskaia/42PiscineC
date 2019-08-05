/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:50:06 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/23 11:50:17 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *new_list;

	if (begin_list && *begin_list)
	{
		while (*begin_list)
		{
			new_list = *begin_list;
			*begin_list = (*begin_list)->next;
			free(new_list);
		}
		*begin_list = NULL;
	}
}
