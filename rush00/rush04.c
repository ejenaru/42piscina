/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:02:30 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/02/28 11:05:46 by idiaz-fo         ###   ########.fr       */
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

void	rush(int col, int fil)
{
	int		i;
	int		j;
	char	letter;

	i = 0;
	while (i < fil)
	{
		j = 0;
		while (j < col)
		{
			letter = whichletter(i, j, fil, col);
			ft_putchar(letter);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
