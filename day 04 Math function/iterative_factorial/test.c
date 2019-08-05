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

int	ft_iterative_factorial(int nb);

int main(void)
{
  printf("%d\n", ft_iterative_factorial(4)); // 24
  printf("%d\n", ft_iterative_factorial(0)); // 1
  printf("%d\n", ft_iterative_factorial(10)); // 3628800
  printf("%d\n", ft_iterative_factorial(12)); // 479001600
  printf("%d\n", ft_iterative_factorial(13)); // 0
  printf("%d\n", ft_iterative_factorial(-2)); // 0
  printf("%d\n", ft_iterative_factorial(1000)); // 0
    return 0;
}
