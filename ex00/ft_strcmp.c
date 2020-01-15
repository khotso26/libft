/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmasiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 07:35:51 by kmasiten          #+#    #+#             */
/*   Updated: 2020/01/15 16:12:42 by kmasiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	b;

	b = 0;
	while (s1[b] && s2[b] && s1[b] == s2[b])
	{
		++b;
	}
	return ((unsigned char)s1[b] - (unsigned char)s2[b]);
}
