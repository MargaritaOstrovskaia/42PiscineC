/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:34:32 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/18 17:55:37 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	char *str;

	while (*tab)
	{
		str = *tab;
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
		ft_putchar('\n');
	}
}
