/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:26:30 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/03 10:49:23 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number++ <= '9')
		ft_putchar(number - 1);
	return ;
}
