/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 21:10:45 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/02/26 13:49:51 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char n[3];
	char comma[2];

	n[0] = '0';
	comma[0] = ',';
	comma[1] = ' ';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				write(1, &n, 3);
				if (!(n[0] == '7' && n[1] == '8' && n[2] == '9'))
				{
					write(1, &comma, 2);
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
