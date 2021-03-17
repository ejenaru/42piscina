/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:46:25 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 16:55:08 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0)
		return (1);
	else
	{
		i = 2;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
				return (0);
			i = i % 2 == 0 ? i + 1 : i + 2;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	int search;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		search = 2;
	else if (nb % 2 == 0)
		search = nb + 1;
	else
		search = nb;
	while (search <= 2147483647)
	{
		if (is_prime(search) == 1)
			return (search);
		search += 2;
	}
	return (0);
}
