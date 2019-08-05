/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:52:25 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 21:57:34 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("asdf_asdf    %d -> %d\n", strcmp("asdf", "asdf"), ft_strcmp("asdf", "asdf"));
	printf("asde_asdf    %d -> %d\n", strcmp("asde", "asdf"), ft_strcmp("asde", "asdf"));
	printf("asdg_asdf    %d -> %d\n", strcmp("asdg", "asdf"), ft_strcmp("asdg", "asdf"));
	printf("_            %d -> %d\n", strcmp("", ""), ft_strcmp("", ""));
	printf("A_           %d -> %d\n", strcmp("A", ""), ft_strcmp("A", ""));
	printf("_A           %d -> %d\n", strcmp("", "A"), ft_strcmp("", "A"));
	return 0;
}
