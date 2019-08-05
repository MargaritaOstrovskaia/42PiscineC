/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 20:57:50 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/25 21:50:17 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	int		diff;
	t_btree	*node;

	node = btree_create_node(item);
	if (*root == 0)
		*root = node;
	else
	{
		diff = cmpf((*root)->item, item);
		if (diff >= 0)
			btree_insert_data(&(*root)->right, item, cmpf);
		else
			btree_insert_data(&(*root)->left, item, cmpf);
	}
}
