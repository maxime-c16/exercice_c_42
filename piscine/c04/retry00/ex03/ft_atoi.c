/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:59:04 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/09 02:38:14 by mcauchy          ###   ########.fr       */
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
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i] - '0');
			i++;
		}
		return (res * sign);
	}
	return (0);
}
