/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:18:08 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/16 09:32:01 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char    *ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "asdf qWeRtY ZXCV 100TIS";
	char str2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	return 0;
}
