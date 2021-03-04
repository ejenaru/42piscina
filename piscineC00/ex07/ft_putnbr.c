/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:11:16 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/04 10:35:53 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	char digit;

	if (num == -2147483648)
	{
		ft_putnbr(num / 10);
		putchar('8');
	}
	else
	{
		if (num < 0)
		{
			putchar('-');
			num = -num;
		}
		if (num > 9)
		{
			ft_putnbr(num / 10);
			putchar((num % 10) + '0');
		}
		else
		{
			digit = ((num % 10) + '0');
			putchar(digit);
		}
	}
}
