/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:23:13 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 12:36:28 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int num;
	int i;

	i = 0;
	num = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (i < nb)
	{
		num = num * (i + 1);
		i++;
	}
	return (num);
}
