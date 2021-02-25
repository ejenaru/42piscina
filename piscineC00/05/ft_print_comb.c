/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:10:45 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/02/25 21:37:40 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char n[3];

	n[0] = '0';

	while (n[0] <= '9')
	{
		while (n[1] <= '9')
		{
			while (n[2] <= '9')
			{
				write(1, &n, 3);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

int main(void)
{
	ft_print_comb();
}
