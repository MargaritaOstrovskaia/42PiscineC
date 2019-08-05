/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 12:27:18 by oneumann          #+#    #+#             */
/*   Updated: 2019/07/14 12:40:55 by oneumann         ###   ########.fr       */
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
			if (row == 0 || col == 0 || row == y - 1 || col == x - 1)
				ch = 'B';
			if (col == x - 1 && (row == 0 || row == y - 1))
				ch = 'C';
			if (col == 0 && (row == 0 || row == y - 1))
				ch = 'A';
			ft_putchar(ch);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
