/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:29:33 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 11:52:57 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb);

int	main(void)
{
    char test11[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
    char test12[256] = "\0zxcvzxcvzxcvxzcvzxcvzxcv";
    char test51[256] = "Hello ";
    char test52[256] = "Hello ";

    printf("%s -> %s\n", strncat(test11, "asdf", 16), ft_strncat(test12, "asdf", 16));
    printf("%s -> %s\n", strncat(test11, "", 16), ft_strncat(test12, "", 16));
    printf("%s -> %s\n", strncat(test11, "qwerty", 0), ft_strncat(test12, "qwerty", 0));
    printf("%s -> %s\n", strncat(test11, "asdf", 3), ft_strncat(test12, "asdf", 3));
    printf("%s -> %s\n", strncat(test51, "it's me! Can", 8), 
			ft_strncat(test52, "it's me! Can", 8));
    return 0;
}
