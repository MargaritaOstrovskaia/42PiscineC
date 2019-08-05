/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:41:50 by oneumann          #+#    #+#             */
/*   Updated: 2019/07/14 12:55:08 by oneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	char	ch;
	int		row;
	int		col;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			ch = ' ';
			if (row == 0 || row == y - 1)
				ch = '-';
			if (col == 0 || col == x - 1)
				ch = '|';
			if (row == 0 && (col == 0 || col == x - 1))
				ch = 'o';
			if (row == y - 1 && (col == 0 || col == x - 1))
				ch = 'o';
			ft_putchar(ch);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
