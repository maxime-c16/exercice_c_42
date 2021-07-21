/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:58:48 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/21 13:43:15 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_double(char *str, char c, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *av1, char *av2)
{
	int	i1;
	int	i2;

	i1 = 0;
	while (av1[i1])
	{
		i2 = 0;
		while (av2[i2])
		{
			if (av1[i1] == av2[i2] )
			{
				if (ft_check_double(av1, av1[i1], i1))
					write(1, &av1[i1], 1);
				break ;
			}
			i2++;
		}
		i1++;
	}
	write(1, "\n", 1);
	return ;
}

int	main(int ac, char **av)
{
	inter(av[1], av[2]);
}
