/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:57:25 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/07 18:43:42 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 97 || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
