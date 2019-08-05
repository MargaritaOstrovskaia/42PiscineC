/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 21:54:33 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/11 21:54:37 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int n);

char    *ft_strrev(char *str)
{
    int count;
    int i;
    char c;

    count = 0;
    i = 0;
    while(str[count] != 0)
        count++;
    while(i < count / 2)
    {
        c = str[i];
        str[i] = str[count - 1 - i];
        str[count - 1 - i] = c;
        i++;
    }

    return str;
}
