/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:31:13 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/03 14:38:20 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char	*str)
{
	int		a;

	a = 0;
	while (str[a++])
		write(1, str + a - 1, 1);
	return ;
}