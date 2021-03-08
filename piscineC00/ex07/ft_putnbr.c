/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:11:16 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/08 09:30:56 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fputchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	char digit;

	if (num == -2147483648)
	{
		ft_putnbr(num / 10);
		fputchar('8');
	}
	else
	{
		if (num < 0)
		{
			fputchar('-');
			num = -num;
		}
		if (num > 9)
		{
			ft_putnbr(num / 10);
			fputchar((num % 10) + '0');
		}
		else
		{
			digit = ((num % 10) + '0');
			fputchar(digit);
		}
	}
}
