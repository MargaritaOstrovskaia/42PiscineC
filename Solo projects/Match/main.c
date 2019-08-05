/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:00:23 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/20 19:55:27 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int r;
	
	printf("argc = %d\n", argc);
	if (argc == 3)
	{
		r = match(argv[1], argv[2]);
		printf("Result: %d\n", r);
	}
	return (0);
}
