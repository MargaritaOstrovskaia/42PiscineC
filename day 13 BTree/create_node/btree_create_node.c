/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 19:24:38 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/25 19:24:41 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *node;

	node = malloc(sizeof(node));
	if (node == NULL)
		return (NULL);
	node->right = 0;
	node->left = 0;
	node->item = item;
	return (node);
}
