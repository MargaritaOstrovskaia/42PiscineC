/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:06:28 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 10:08:00 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
    printf("%d\n", ft_str_is_numeric("123456"));
    printf("%d\n", ft_str_is_numeric("asdf1234"));
    printf("%d\n", ft_str_is_numeric("0"));
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("12345asdf"));
    return 0;
}
