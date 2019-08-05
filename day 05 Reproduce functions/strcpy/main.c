/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:42:12 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 19:46:08 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
    char test1[256] = "asdf";
    printf("%s", ft_strcpy(test1, "qwerty\n"));
    printf("%s", ft_strcpy(test1, ""));
    printf("%s", ft_strcpy(test1, "hell0\n"));
    return (0);
}
