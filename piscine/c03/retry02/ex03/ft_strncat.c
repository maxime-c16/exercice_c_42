/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:08:42 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/09 01:52:48 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;

	a = dest;
	while (*a)
		a++;
	while (nb-- && *src)
		*a++ = *src++;
	*a = '\0';
	return (dest);
}
