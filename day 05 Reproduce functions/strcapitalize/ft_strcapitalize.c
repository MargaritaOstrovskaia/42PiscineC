/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:58:33 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 09:35:13 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else
			{
				if ((str[i - 1] >= 9 && str[i - 1] <= 13) || str[i - 1] == ' '
						|| str[i - 1] == '+' || str[i - 1] == '-')
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
