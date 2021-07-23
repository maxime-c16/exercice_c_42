/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */

/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:13:03 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/01 14:29:37 by mcauchy          ###   ########.fr       */
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

void	ft_print_nums(int a, int b)
{
	ft_print_int(a);
	ft_print_int(b);
}

char	ft_conv_ascii(int n, int digits_select)
{
	char	d;

	if (digits_select == 1)
	{
		d = n % 10 + '0';
	}
	else
	{
		d = n / 10 + '0';
	}
	return (d);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = -1;
	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			if (!(a == 0 && b == 1))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(ft_conv_ascii(a, 0));
			ft_putchar(ft_conv_ascii(a, 1));
			ft_putchar(' ');
			ft_putchar(ft_conv_ascii(b, 0));
			ft_putchar(ft_conv_ascii(b, 1));
		}
	}
}
