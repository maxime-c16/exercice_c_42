/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 08:34:06 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/03 14:10:47 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_int(int a)
{
	char	*alpha;

	alpha = "0123456789";
	write(1, alpha + a, 1);
}

void	ft_print_nums(int a, int b, int c)
{
	ft_print_int(a);
	ft_print_int(b);
	ft_print_int(c);
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_nums(a, b, c);
				if (a != 7 || b != 8 || c != 9)
				{
					write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
	return ;
}
