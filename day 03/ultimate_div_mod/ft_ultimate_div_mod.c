/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 20:44:35 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/11 20:44:41 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void   ft_ultimate_div_mod(int *a, int *b)
{
    int c;
    
    c = *a;
    *a = c / *b;
    *b = c % *b;
}
