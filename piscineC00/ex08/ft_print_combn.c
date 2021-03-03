/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:02:24 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/02 11:47:47 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	print_iter(int iter)
{
	while (iter < 10)
	{
		ft_putchar(iter + '0');
		ft_putchar('-');
	}
	if (iter == 10)
		print_iter(iter++ + 1);
}

void	print_diff(int n)
{
	n = 1;
}

void	ft_print_combn(void)
{

}
