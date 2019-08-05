/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:15:17 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 10:15:58 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
    printf("%d\n", ft_str_is_lowercase("asdf"));
    printf("%d\n", ft_str_is_lowercase("asdF"));
    printf("%d\n", ft_str_is_lowercase("ASDF"));
    printf("%d\n", ft_str_is_lowercase("1234"));
    printf("%d\n", ft_str_is_lowercase(""));
    return 0;
}
