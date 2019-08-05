/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:16:28 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 11:17:14 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *sr);

int	main(void)
{
    char test11[256] = "";
    char test12[256] = "";
    char test21[256] = "";
    char test22[256] = "";
    char test31[256] = "";
    char test32[256] = "";
    char test41[256] = "Thank ";
    char test42[256] = "Thank ";
    char test51[256] = "Hello";
    char test52[256] = "Hello";
    
    printf("%s -> %s\n", strcat(test11, "asdf"), ft_strcat(test12, "asdf"));
    printf("%s -> %s\n", strcat(test21, ""), ft_strcat(test22, ""));
    printf("%s -> %s\n", strcat(test31, "zxcv"), ft_strcat(test32, "zxcv"));
    printf("%s -> %s\n", strcat(test41, "you"), ft_strcat(test42, "you"));
    printf("%s -> %s\n", strcat(test51, ""), ft_strcat(test52, ""));
    return 0;
}
