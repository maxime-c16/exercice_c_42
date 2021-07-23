/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 22:11:01 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/07 22:39:39 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = size;
	while (*dest)
		dest++;
	while (*src && i)
	{
		*dest++ = *src++;
		i--;
	}
	while (*dest)
		*dest = '\0';
	if (size == 0)
		return (ft_strlen(dest));
	if (size <= ft_strlen(dest))
		return (ft_strlen(dest) + ft_strlen(src));
	return (0);
}
