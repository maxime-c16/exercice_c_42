/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 11:31:32 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/21 13:51:54 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_char_is_same(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[i] != str[j] && str[j])
		{
			j++;
		}
		if (str[i] == str[j])
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	len;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < ' ' || base[i] == 127)
			return (0);
		i++;
	}
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	return (1);
}

int	ft_str_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	j;

	j = 0;
	res = 0;
	sign = 1;
	if (ft_check_base(base) == 0 || ft_char_is_same(base) == 0)
		return (0);
	while ((str[j] >= 9 && str[j] <= 13) || str[j] == ' ')
		j++;
	while (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			sign *= -1;
		j++;
	}
	while (ft_str_is_in_base(str[j], base) != -1 && str[j])
	{
		res = res * ft_strlen(base) + ft_str_is_in_base(str[j], base);
		j++;
	}
	return (res * sign);
}
