/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:51:39 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/10 11:23:56 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printhex(unsigned long num, int cont)
{
	char digit;
	char *base;

	base = "0123456789abcdef";
	if (cont != 0)
	{
		if ((num / 16) == 0)
		{
			digit = base[num];
			printhex(num / 16, --cont);
			write(1, &digit, 1);
		}
		else
		{
			printhex(num / 16, --cont);
			digit = base[num % 16];
			write(1, &digit, 1);
		}
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
			printhex(str[i], 2);
		}
		i++;
	}
}
