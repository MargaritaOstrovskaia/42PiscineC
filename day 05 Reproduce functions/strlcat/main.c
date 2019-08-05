/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:53:49 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 12:19:41 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
    char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
    char test1[256] = "\0zxcvzxcvzxcvxzcvzxcv";

    printf("%lu -> %u\n", strlcat(test1, "asdf", 16), ft_strlcat(test, "asdf", 16));
    printf("%s -> %s\n\n", test1, test);

    printf("%lu -> %u\n", strlcat(test1, "asdf", 6), ft_strlcat(test, "asdf", 6));
    printf("%s -> %s\n\n", test1, test);

    printf("%lu -> %u\n", strlcat(test1, "asdf", 4), ft_strlcat(test, "asdf", 4));
    printf("%s -> %s\n\n", test1, test);

    printf("%lu -> %u\n", strlcat(test1, "", 16), ft_strlcat(test, "", 16));
    printf("%s -> %s\n\n", test1, test);

    printf("%lu -> %u\n", strlcat(test1, "asdf", 0), ft_strlcat(test, "asdf", 0));
    printf("%s -> %s\n\n", test1, test);
    return 0;
}
