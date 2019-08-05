/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 20:53:37 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/18 18:57:59 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int*)malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (0);
	i = 0;
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (i);
}
