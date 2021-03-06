/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmasiten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 12:17:19 by kmasiten          #+#    #+#             */
/*   Updated: 2020/01/15 16:04:56 by kmasiten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

int	ft_strlen(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
		m++;
	return (m);
}
