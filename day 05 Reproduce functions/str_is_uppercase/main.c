/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:21:16 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 10:21:55 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
    printf("%d\n", ft_str_is_uppercase("ASDF"));
    printf("%d\n", ft_str_is_uppercase("ASDf"));
    printf("%d\n", ft_str_is_uppercase("asdf"));
    printf("%d\n", ft_str_is_uppercase("1234"));
    printf("%d\n", ft_str_is_uppercase(""));
    return 0;
}
