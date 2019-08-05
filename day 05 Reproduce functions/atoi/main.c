/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 09:42:12 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/15 21:50:52 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
    printf("%d -> %d\n", atoi("12    12"), ft_atoi("12    12"));
    printf("%d -> %d\n", atoi("\t\n\v\f\r +256"), ft_atoi("\t\n\v\f\r +256"));
    printf("%d -> %d\n", atoi("256a99999"), ft_atoi("256a99999"));
    printf("%d -> %d\n", atoi("0"), ft_atoi("0"));
    printf("%d -> %d\n", atoi("15"), ft_atoi("15"));
    printf("%d -> %d\n", atoi("-25"), ft_atoi("-25"));
    printf("%d -> %d\n", atoi("12345"), ft_atoi("12345"));
    printf("%d -> %d\n", atoi("987654321"), ft_atoi("987654321"));
    printf("%d -> %d\n", atoi("-34567"), ft_atoi("-34567"));
    printf("%d -> %d\n", atoi("2147483647"), ft_atoi("2147483647"));
    printf("%d -> %d\n", atoi("-2147483648"), ft_atoi("-2147483648"));;
    return (0);
}
