/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:37:41 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/11 18:06:43 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	char digit;

	if (nb / 10 == 0)
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}
	else
	{
		digit = (nb % 10) + '0';
		ft_putnbr(nb / 10);
		write(1, &digit, 1);
	}
}
