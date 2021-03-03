/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:11:16 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/02 19:57:41 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int num)
{
	char digit;

	if (num > 0)
	{
		ft_putnbr(num / 10);
	}
	if (num != 0)
	{
		digit = ((num % 10) + '0');
		write(1, &digit, 1);
	}
}

int		main(void)
{
	ft_putnbr(4534);
	ft_putnbr(0);
}
