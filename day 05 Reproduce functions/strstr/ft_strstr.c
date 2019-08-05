/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:14:53 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 19:17:23 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int i;

	if (to_find[0] == 0)
		return (str);
	index = 0;
	while (str[index] != 0)
	{
		if (str[index] == to_find[0])
		{
			i = 1;
			while (to_find[i] != 0 && str[index + i] == to_find[i])
				i++;
			if (to_find[i] == 0)
				return (&str[index]);
		}
		index++;
	}
	return (0);
}
