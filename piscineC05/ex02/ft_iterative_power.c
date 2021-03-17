/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:00:49 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 13:10:50 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int num;

	num = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	i = 0;
	while (i++ < power)
	{
		num *= nb;
	}
	return (num);
}
