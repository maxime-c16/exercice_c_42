/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:50:29 by mcauchy           #+#    #+#             */
/*   Updated: 2021/07/09 15:05:55 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_base(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+')
		{
			return (1);
		}
		if (str[i] == '-')
		{
			return (1);
		}
		i++;
	}
	if (sizeof(str) <= 1)
		return (1);
	return (0);
}

int	main(void)
{
	char	*str = "0123456789ABCDEF";
	char	*src = "";

	printf("base ==> ok ? %d\n", ft_check_base(str));
	printf("base ==> ok ? %d\n", ft_check_base(src));
	printf("str = %d\n", ft_char_is_same(str));
	printf("src = %d\n", ft_char_is_same(src));
	return (0);
}
