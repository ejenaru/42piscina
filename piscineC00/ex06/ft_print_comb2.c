/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 14:11:16 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/04 10:27:39 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int num)
{
	char digit;

	if (num > 0)
	{
		print_number(num / 10);
	}
	if (num != 0)
	{
		digit = ((num % 10) + '0');
		write(1, &digit, 1);
	}
}

void	ft_print_comb2(void)
{
	int		iter[2];
	char	number1[2];
	char	number2[2];

	iter[0] = 0;
	while (iter[0] < 100)
	{
		iter[1] = iter[0] + 1;
		while (iter[1] < 100)
		{
			number1[0] = (iter[0] / 10) + '0';
			number1[1] = (iter[0] % 10) + '0';
			number2[0] = (iter[1] / 10) + '0';
			number2[1] = (iter[1] % 10) + '0';
			write(1, &number1, 2);
			write(1, &" ", 1);
			write(1, &number2, 2);
			if (!(iter[0] == 98 && iter[1] == 99))
				write(1, &", ", 2);
			iter[1]++;
		}
		iter[0]++;
	}
}
