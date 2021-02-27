/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 14:02:30 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/02/27 20:04:54 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

char	whichletter(int i, int j, int maxi, int maxj)
{
	char l;

	if (i == 0)
	{
		if (j == 0)
			l = 'A';
		else if (j == maxj - 1)
			l = 'C';
		else
			l = 'B';
	}
	else if (i == maxi - 1)
	{
		if (j == 0)
			l = 'C';
		else if (j == maxj - 1)
			l = 'A';
		else
			l = 'B';
	}
	else
	{
		if (j == 0 || j == maxj - 1)
			l = 'B';
		else
			l = ' ';
	}
	return (l);
}

void	rush(unsigned int col, unsigned int fil)
{
	int unsigned	i;
	int unsigned	j;
	char			letter;

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
