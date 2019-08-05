/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:05:27 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/25 21:49:51 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	int		diff;

	if (root == 0)
		return (0);
	diff = cmpf(root->item, data_ref);
	if (diff == 0)
		return (root->item);
	if (diff > 0)
		return (btree_search_item(root->right, data_ref, cmpf));
	else
		return (btree_search_item(root->left, data_ref, cmpf));
}
