/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:59:04 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/09 00:22:02 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int		res;
	int		i;
	int		sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i])
	{
		if (str[i] == '\t' || str[i] == '\n'
				|| str[i] == '\v' || str[i] == '\f'
				|| str[i] == '\r' || str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (res * sign);
	}
	return (0);
}
