/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:02:30 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/02/28 16:45:30 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	whichletter(int i, int j, int maxi, int maxj)
{
	if (i == 0)
	{
		if (j == 0)
			return ('A');
		else if (j == maxj - 1)
			return ('C');
		else
			return ('B');
	}
	else if (i == maxi - 1)
	{
		if (j == 0)
			return ('C');
		else if (j == maxj - 1)
			return ('A');
		else
			return ('B');
	}
	else
	{
		if (j == 0 || j == maxj - 1)
			return ('B');
		else
			return (' ');
	}
}

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	letter;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			letter = whichletter(i, j, y, x);
			ft_putchar(letter);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
