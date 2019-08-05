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
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int main(void)
{
    printf("%d\n", ft_iterative_power(2, 2)); // 4
    printf("%d\n", ft_iterative_power(2, 1)); //2
    printf("%d\n", ft_iterative_power(2, 0)); // 1
    printf("%d\n", ft_iterative_power(2, -3)); // 0
    printf("%d\n", ft_iterative_power(2, 4)); // 16
    printf("%d\n", ft_iterative_power(5, 3)); // 125
    printf("%d\n", ft_iterative_power(3, 5)); // 243
    printf("%d\n", ft_iterative_power(2, 1000000)); // -1

	return 0;
}
