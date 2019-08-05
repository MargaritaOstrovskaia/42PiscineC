/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:26:12 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/21 20:29:14 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 9

int	check_col(int n, int r, int c, int **sudoku);
int	check_row(int n, int r, int c, int **sudoku);
int	check_square(int n, int r, int c, int **sudoku);

int	check_argc(int argc)
{
	if (argc != SIZE + 1)
		return (0);
	return (1);
}

int	check_argv(char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (argv[i + 1][j] != 0)
			j++;
		if (j != SIZE)
			return (0);
		i++;
	}
	return (1);
}

int	check_isnum(int argc, char **argv)
{
	int i;
	int j;

	if (argc != SIZE + 1)
		return (0);
	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (argv[i + 1][j] != 0)
		{
			if ((argv[i + 1][j] < '1' || argv[i + 1][j] > '9')
					&& argv[i + 1][j] != '.')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_isunique(int **sudoku)
{
	int r;
	int c;

	r = 0;
	while (r < SIZE)
	{
		c = 0;
		while (c < SIZE)
		{
			if (sudoku[r][c] != 0)
			{
				if (!check_row(sudoku[r][c], r, c, sudoku)
						|| !check_col(sudoku[r][c], r, c, sudoku)
						|| !check_square(sudoku[r][c], r, c, sudoku))
					return (0);
			}
			c++;
		}
		r++;
	}
	return (1);
}
