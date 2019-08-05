/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 20:20:33 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/10 20:20:45 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	print_number(int num)
{
	int a;
	int b;

	a = num / 10;
	b = num % 10;
	ft_putchar('0' + a);
	ft_putchar('0' + b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	a_max;
	int	b_max;

	a_max = 98;
	b_max = 99;
	a = 0;
	while (a <= a_max)
	{
		b = a + 1;
		while (b <= b_max)
		{
			print_number(a);
			ft_putchar(' ');
			print_number(b);
			if ((a != a_max) || (b != b_max))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
