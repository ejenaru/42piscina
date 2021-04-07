/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:11:09 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 11:13:09 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == 0 || base[1] == 0)
		return (1);
	while (base[i] != 0)
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (2);
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				return (3);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			basenum;
	long int	nbrc;

	nbrc = nbr;
	basenum = str_len(base);
	if (check_base(base) != 0)
		return ;
	if (nbrc < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-(nbrc / basenum), base);
		write(1, &base[-(nbrc % basenum)], 1);
	}
	else
	{
		if ((nbrc / basenum) == 0)
			write(1, &base[nbrc], 1);
		else
		{
			ft_putnbr_base(nbrc / basenum, base);
			write(1, &base[nbrc % basenum], 1);
		}
	}
}

/*void	ft_putnbr_base(int nbr, char *base)
{
	int basenum;
	char digit;
	long int num;

	num = nbr;
	basenum = str_len(base);
	if (nbr == -2147483648)
	{
		digit = base[-(nbr % basenum)];
		nbr = nbr / basenum;
		ft_putnbr_base(nbr, base);
		write(1, &digit, 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
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
}*/
