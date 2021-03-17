/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:46:25 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 18:26:50 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_prime(int nb)
{
	int i;

	i = 3;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int search;

	if (nb <= 2)
		return (2);
	else if (nb == 2)
		return (2);
	else if (nb % 2 == 0)
		search = nb + 1;
	else
		search = nb;
	printf(":%d: ", search);
	while (search <= 2147483647)
	{
		if (is_prime(search) == 1)
			return (search);
		search += 2;
	}
	return (0);
}
