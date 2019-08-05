/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 19:18:38 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 19:20:15 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("1. %s\n", ft_strstr("asdf qwerty", "wer"));
    printf("2. %s\n", ft_strstr("asdf qwerty qwerty", "wer"));
    printf("3. %s\n", ft_strstr("asdf qwerty", "qwerty1"));
    printf("4. %s\n", ft_strstr("", "wer"));
    printf("5. %s\n", ft_strstr("asdf qwerty", "zxcv"));
    printf("6. %s\n", ft_strstr("asdf qwerty", ""));

    return(0);
}
