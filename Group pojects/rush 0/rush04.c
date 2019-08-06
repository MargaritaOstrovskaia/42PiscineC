/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:00:02 by oneumann          #+#    #+#             */
/*   Updated: 2019/07/14 14:04:14 by oneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	rush(int x, int y)
{
	char	ch;
	int		r;
	int		c;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			ch = ' ';
			if (r == 0 || r == y - 1 || c == 0 || c == x - 1)
				ch = 'B';
			if ((r == 0 && c == 0) || (r == y - 1 && c == x - 1 && (r != 0)))
				ch = 'A';
			if (r == 0 && c == x - 1 && (c != r))
				ch = 'C';
			if (r == y - 1 && c == 0 && (r != 0))
				ch = 'C';
			ft_putchar(ch);
			c++;
		}
		ft_putchar('\n');
		r++;
	}
}