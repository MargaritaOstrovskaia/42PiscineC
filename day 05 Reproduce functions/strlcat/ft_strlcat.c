/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:46:24 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 19:24:23 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0 && (j + i + 1) < size && size > i + 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	while (src[j] != 0)
		j++;
	if (size < i)
		i = size;
	return (i + j);
}
