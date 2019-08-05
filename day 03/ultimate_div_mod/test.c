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

void   ft_ultimate_div_mod(int *a, int *b);

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

    a = 5;
    b = 10;
    ft_ultimate_div_mod(&a, &b);
    ft_putnbr(a);
    ft_putchar(' ');
    ft_putnbr(b);
	return 0;
}
