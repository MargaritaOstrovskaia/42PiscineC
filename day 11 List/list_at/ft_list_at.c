/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:59:52 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/23 11:59:54 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int n;

	n = nbr;
	while (n > 0 && begin_list)
	{
		begin_list = begin_list->next;
		n--;
	}
	if (n == 0)
		return (begin_list);
	else
		return (NULL);
}
