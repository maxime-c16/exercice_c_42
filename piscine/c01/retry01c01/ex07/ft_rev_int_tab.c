/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:17:34 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/03 18:15:55 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		a;

	i = 0;
	a = 0;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = a;
		i++;
	}
}
