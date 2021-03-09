/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:51:39 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/09 19:12:14 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printhex(long num)
{
	char digit;
	char *base;

	base = "0123456789abcdef";

	if ((num / 16) == 0)
	{
		digit = base[num];
		write(1, &digit, 1);
	}
	else
	{
		printhex(num / 16);
		digit = base[num % 16];
		write(1, &digit, 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			write(1, &"\\", 1);
			if (str[i] / 16 == 0)
			{
				write(1, &"0", 1);
				printhex(str[i]);
			}
			else
				printhex(str[i]);
		}
		i++;
	}
}
