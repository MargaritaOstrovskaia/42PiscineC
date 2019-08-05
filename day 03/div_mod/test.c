/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 17:00:18 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/10 17:02:48 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else
	{
		if (n / 10 > 0)
			ft_putnbr(n / 10);
		ft_putchar('0' + (n % 10));
	}
}

int main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 5;
    b = 10;
    ft_div_mod(a, b, &div, &mod);
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);
    ft_putchar('\n');
    ft_putnbr(div);
    ft_putchar('\n');
    ft_putnbr(mod);
    ft_putchar('\n');
	return 0;
}
