/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:18:08 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 08:49:24 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "asdf qWeRtY ZXCV\n";
	char str1[] = "7684cuiuzfFDTklk8543";
	char str2[] = "";

	printf("%s", ft_strlowcase(str));
	printf("%s", ft_strlowcase(str1));
	printf("%s", ft_strlowcase(str2));
	return 0;
}
