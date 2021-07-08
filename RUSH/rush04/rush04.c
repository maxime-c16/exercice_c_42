/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:39:29 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/04 17:59:32 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_first_row(char l, char m, char r, int x)
{
	ft_putchar(l);
	while (x > 2)
	{
		ft_putchar(m);
		x--;
	}
	ft_putchar(r);
	ft_putchar('\n');
}

int main(void)
{
	char	l;
	char	m;
	char	r;
	int		x;

	x = 5;
	l = 'A';
	m = 'B';
	r = 'C';
	ft_first_row(l, m, r, x);
	return (0);
}
