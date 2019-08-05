/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:39:09 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 10:39:53 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
    printf("%d\n", ft_str_is_printable("asdf"));
    printf("%d\n", ft_str_is_printable("1234"));
    printf("%d\n", ft_str_is_printable("ASDF"));
    printf("%d\n", ft_str_is_printable("!@#$^&*()_+-=[]{}:;,./<>?"));
    printf("%d\n", ft_str_is_printable("\xf0"));
    printf("%d\n", ft_str_is_printable("\x7f"));
    printf("%d\n", ft_str_is_printable("\n"));
    printf("%d\n", ft_str_is_printable(""));
    return 0;
}
