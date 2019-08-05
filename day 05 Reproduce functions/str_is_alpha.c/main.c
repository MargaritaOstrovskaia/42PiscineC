/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 09:54:09 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 09:56:22 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
   	//printf("%d\n", ft_str_is_alpha("asdf qWeRtY ZXCV 100TIS"));
	printf("%d\n", ft_str_is_alpha("asdf"));
	printf("%d\n", ft_str_is_alpha("QWERTY"));
	printf("%d\n", ft_str_is_alpha("asdf1234"));
	printf("%d\n", ft_str_is_alpha("999"));
	printf("%d\n", ft_str_is_alpha(""));
	return 0;
}
