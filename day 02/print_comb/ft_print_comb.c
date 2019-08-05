/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 18:47:41 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/10 18:47:48 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;
	int curr;

	curr = 12;
	while (curr < 999)
	{
		a = curr / 100;
		b = (curr / 10) % 10;
		c = curr % 10;
		if ((a < b) && (b < c))
		{
			if (curr != 12)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar('0' + a);
			ft_putchar('0' + b);
			ft_putchar('0' + c);
		}
		curr = curr + 1;
	}
}
