/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 13:11:40 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/23 13:11:45 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*rm;
	t_list	*curr;

	curr = *begin_list;
	while (curr && curr->next)
	{
		if ((*cmp)(curr->next->data, data_ref) == 0)
		{
			rm = curr->next;
			curr->next = curr->next->next;
			free(rm);
		}
		curr = curr->next;
	}
	curr = *begin_list;
	if (curr && (*cmp)(curr->data, data_ref) == 0)
	{
		*begin_list = curr->next;
		free(curr);
	}
}
