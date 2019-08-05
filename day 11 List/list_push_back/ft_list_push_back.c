/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:02:06 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/23 14:35:10 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	if (begin_list)
	{
		if (*begin_list == NULL)
			*begin_list = ft_create_elem(data);
		else
		{
			list = (*begin_list);
			while ((*list).next != NULL)
				list = (*list).next;
			(*list).next = ft_create_elem(data);
		}
	}
}
