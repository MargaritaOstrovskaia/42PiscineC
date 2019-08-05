/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:35:10 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 10:03:25 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != 0)
	{
		ft_putchar(str[index]);
		index++;
	}
}
