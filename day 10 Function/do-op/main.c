/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 18:30:13 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/22 18:31:14 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putstr(char *str);

void	ft_calc(int a, char c, int b)
{
	if (c == '+')
		ft_putnbr(a + b);
	else if (c == '-')
		ft_putnbr(a - b);
	else if (c == '*')
		ft_putnbr(a * b);
	else if (c == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(a / b);
	}
	else if (c == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(a % b);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int		main(int argc, char** argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == 0)
			ft_calc(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		else
			write(1, "0\n", 2);
	}
	return (0);
}
