/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 19:19:07 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/21 20:58:21 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

#define SIZE 9

int		check_argc(int argc);
int		check_argv(char **argv);
int		check_isnum(int argc, char **argv);
int		check_isunique(int **sudoku);
int		number_unassigned(int *row, int *col, int **sudoku);
int		check_col(int n, int r, int c, int **sudoku);
int		check_row(int n, int r, int c, int **sudoku);
int		check_square(int n, int r, int c, int **sudoku);
int		solve_sudoku(int **sudoku);

void	print_sudoku(int **matrix)
{
	int		i;
	int		j;
	char	ch;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ch = matrix[i][j] + '0';
			write(1, &ch, 1);
			if (j != 8)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	fill_sudoku(int **matrix, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (argv[i + 1][j] != 0)
		{
			if (argv[i + 1][j] == '.')
				matrix[i][j] = 0;
			else
				matrix[i][j] = argv[i + 1][j] - '0';
			j++;
		}
		i++;
	}
}

void	free_mamory(int **matrix)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		free(matrix[i]);
		i++;
	}
	free(matrix);
}

int		check_and_solve(int **matrix)
{
	if (!check_isunique(matrix))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (solve_sudoku(matrix))
	{
		print_sudoku(matrix);
		return (1);
	}
	write(1, "Error\n", 6);
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;
	int	iserr;
	int	**matrix;

	iserr = 0;
	if (!check_argc(argc) || !check_argv(argv) || !check_isnum(argc, argv))
		iserr = 1;
	i = 0;
	if (!iserr && ((matrix = (int**)malloc(SIZE * sizeof(int*))) == NULL))
		iserr = 1;
	while (i < SIZE)
	{
		if (!iserr && ((matrix[i] = (int*)malloc(SIZE * sizeof(int))) == NULL))
			iserr = 1;
		i++;
	}
	if (!iserr)
		fill_sudoku(matrix, argv);
	if (!iserr && !check_and_solve(matrix))
		iserr = 1;
	if (iserr == 1)
		write(1, "Error\n", 6);
	else
		free_mamory(matrix);
	return (0);
}
