/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:31:25 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/21 19:38:31 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 9

int	number_unassigned(int *row, int *col, int **sudoku)
{
	int i;
	int j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (sudoku[i][j] == 0)
			{
				*row = i;
				*col = j;
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_col(int n, int r, int c, int **sudoku)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (i != r && sudoku[i][c] == n)
			return (0);
		i++;
	}
	return (1);
}

int	check_row(int n, int r, int c, int **sudoku)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (i != c && sudoku[r][i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	check_square(int n, int r, int c, int **sudoku)
{
	int i;
	int j;
	int row_start;
	int col_start;

	row_start = (r / 3) * 3;
	col_start = (c / 3) * 3;
	i = row_start;
	while (i < row_start + 3)
	{
		j = col_start;
		while (j < col_start + 3)
		{
			if (i != r && j != c && sudoku[i][j] == n)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	solve_sudoku(int **sudoku)
{
	int i;
	int row;
	int col;

	if (number_unassigned(&row, &col, sudoku) == 0)
		return (1);
	i = 1;
	while (i <= SIZE)
	{
		if (check_row(i, row, col, sudoku) && check_col(i, row, col, sudoku)
				&& check_square(i, row, col, sudoku))
		{
			sudoku[row][col] = i;
			if (solve_sudoku(sudoku))
				return (1);
			sudoku[row][col] = 0;
		}
		i++;
	}
	return (0);
}
