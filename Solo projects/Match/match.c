/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mostrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 18:52:33 by mostrovs          #+#    #+#             */
/*   Updated: 2019/07/20 19:46:11 by mostrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 && *s2 == '*')
		return (match(s1 + 1, s2) || match(s1, s2 + 1));
	else if (!*s1 && *s2 == '*')
		return (match(s1, s2 + 1));
	else if (*s1 && *s2 && (*s1 == *s2))
		return (match(s1 + 1, s2 + 1));
	else if (!*s1 && !*s2)
		return (1);
	return (0);
}
