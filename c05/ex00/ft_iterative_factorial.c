/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 02:52:49 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/09 04:27:57 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_iterative_factorial(int nb)
{
	int		a;

	if (nb < 1)
		return (!nb);
	a = 1;
	while (nb)
		a *= nb--;
	return(a);
}
