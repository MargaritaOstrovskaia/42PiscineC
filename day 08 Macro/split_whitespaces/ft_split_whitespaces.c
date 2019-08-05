/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 10:56:03 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/18 17:33:40 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_to_next(char *str)
{
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	return (str);
}

int		ft_calc_lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] > 32 && str[i] < 127)
		i++;
	return (i);
}

int		ft_calc_words(char *str)
{
	int	len;
	int	count;

	len = 0;
	count = 0;
	while (*str != 0)
	{
		str = ft_to_next(str);
		len = ft_calc_lenght(str);
		if (len == 0)
			break ;
		str = str + len;
		count++;
	}
	return (count);
}

void	ft_strncmp(char *dest, char *src, int n)
{
	while (n > 0)
	{
		*(dest++) = *(src++);
		n--;
	}
	*dest = 0;
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		wcount;
	int		len;
	int		i;

	wcount = ft_calc_words(str);
	result = malloc(sizeof(char *) * (wcount + 1));
	i = 0;
	while (i < wcount)
	{
		str = ft_to_next(str);
		len = ft_calc_lenght(str);
		result[i] = malloc(sizeof(char) * (len + 1));
		ft_strncmp(result[i], str, len);
		str = str + len;
		i++;
	}
	result[i] = 0;
	return (result);
}
