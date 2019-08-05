/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:18:08 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 22:44:12 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d > %d\n", strncmp("asdf", "asdf", 4), ft_strncmp("asdf", "asdf", 4));
	printf("%d > %d\n", strncmp("asde", "asdf", 4), ft_strncmp("asde", "asdf", 4));
	printf("%d > %d\n", strncmp("asdg", "asdf", 4), ft_strncmp("asdg", "asdf", 4));
	printf("%d > %d\n", strncmp("asde", "asdf", 3), ft_strncmp("asde", "asdf", 3));
	printf("%d > %d\n", strncmp("asj", "asd", 3), ft_strncmp("asj", "asd", 3));
	printf("%d > %d\n", strncmp("", "", 0), ft_strncmp("", "", 0));
	return 0;
}
