/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 18:31:45 by exam              #+#    #+#             */
/*   Updated: 2019/07/26 18:43:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isdoubles(char *str, char ch, int num)
{
	while (num >= 0)
	{
		if (str[num] == ch)
			return (1);
		num--;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != 0)
		{
			j = 0;
			while (argv[2][j] != 0)
			{
				if (argv[1][i] == argv[2][j])
					if (!ft_isdoubles(argv[1], argv[1][i], i - 1))
					{
						write(1, &argv[1][i], 1);
						break ;
					}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
