/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:42:36 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/08 12:04:30 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	if (nb < 0)
	{
		ft_putchar('-');
		a = -nb;
	}
	else
		a = nb;
	if (a > 9)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	return (ft_putchar(a + '0'));
}
