/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:41:55 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 19:39:23 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int        main(void)
{
    char test1[256] = "asdf";
    printf("%s\n", ft_strncpy(test1, "uiop", 5));
    printf("%s\n", ft_strncpy(test1, "qwerty", 4));
    printf("%s\n", ft_strncpy(test1, "z", 1));
	return(0);
}
