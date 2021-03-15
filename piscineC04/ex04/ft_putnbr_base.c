/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:11:09 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/13 16:31:14 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
	int basenum;
	char digit;

	basenum = str_len(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / basenum, base);
		write(1, &"8", 1);
	}
	if (nbr < 0)
	{
		write(1, &"-", 1);
		ft_putnbr_base(-nbr, base);
	}
	else
	{
		if ((nbr / basenum) == 0)
		{
			digit = base[nbr];
			write(1, &digit, 1);
		}
		else
		{
			ft_putnbr_base(nbr / basenum, base);
			digit = base[nbr % basenum];
			write(1, &digit, 1);
		}
	}
}
