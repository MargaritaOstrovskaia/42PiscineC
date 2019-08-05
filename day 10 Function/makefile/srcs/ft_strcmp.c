/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:49:47 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 21:54:30 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != 0 && s2[index] != 0 && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}
