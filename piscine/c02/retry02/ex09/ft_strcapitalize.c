/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:30:18 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/06 16:18:56 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_is_alphan(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[j])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && ft_is_alphan(str[i - 1]) == 0)
			str[i] -= 32;
		if ((str[i] >= 'A' && str[i] <= 'Z') && ft_is_alphan(str[i - 1]))
			str[i] += 32;
		i++;
		j++;
	}
	return (str);
}
