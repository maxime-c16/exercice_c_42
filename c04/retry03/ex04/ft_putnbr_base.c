/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 21:31:08 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/22 11:59:27 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

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
		if (!(base[i] >= 32 && base[i] <= 126))
			return (0);
		i++;
	}
	len = ft_strlen(base);
	if (len <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = ft_strlen(base);
	if (ft_check_base(base) == 0 || ft_char_is_same(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= i && i > 1)
		ft_putnbr_base(nbr / i, base);
	write(1, &base[nbr % i], 1);
}
