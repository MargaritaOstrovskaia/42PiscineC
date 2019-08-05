/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 09:46:35 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/18 19:24:46 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_arg_len(char *argv)
{
	int i;

	i = 0;
	while (argv[i] != 0)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, int argc, char **argv)
{
	int i;
	int j;
	int pos;

	i = 1;
	pos = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			dest[pos] = argv[i][j];
			pos++;
			j++;
		}
		if (j != 0)
		{
			dest[pos] = '\n';
			pos++;
		}
		i++;
	}
	if (pos > 0 && dest[pos - 1] == '\n')
		dest[pos - 1] = 0;
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		arg_len;
	int		max_len;
	char	*str;

	max_len = 0;
	i = 1;
	while (i < argc)
	{
		arg_len = ft_arg_len(argv[i]);
		if (arg_len != 0)
			max_len = max_len + arg_len + 1;
		i++;
	}
	max_len += 1;
	str = (char*)malloc(max_len * sizeof(char));
	ft_strcat(str, argc, argv);
	return (str);
}
