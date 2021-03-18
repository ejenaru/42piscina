/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeros2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iclement <iclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:42:42 by iclement          #+#    #+#             */
/*   Updated: 2021/03/14 21:43:40 by iclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"
#include <unistd.h>

int		size_array(unsigned int n)
{
	int				i;
	unsigned int	bonus;
	int				length;

	length = 0;
	i = 0;
	bonus = n;
	while (bonus > 0)
	{
		bonus = bonus / 10;
		i++;
	}
	if (i / 3 > 0 && (i % 3 == 1 || i % 3 == 2))
		length = i + ((i / 3) * 2);
	else if (i / 3 > 0 && i % 3 == 0)
		length = i + (i / 3) + (i / 3 - 1);
	else if (i / 3 == 0)
		length = i;
	return (length);
}

void	create_array(int length, int *array, unsigned int n, int i)
{
	int		j;

	j = 1;
	while (length > 0)
	{
		if (j % 5 == 2)
		{
			array[length - 1] = (n % 10);
			n = n / 10;
		}
		if (j % 5 == 3 && (n % 10) != 0)
			array[length - 1] = 100;
		else if (j % 5 == 3 && (n % 10) == 0)
			array[length - 1] = 0;
		if (j % 5 == 0)
			array[length - 1] = ft_iterative_power(1000, j / 5);
		if (j % 5 == 1 || j % 5 == 4)
		{
			array[length - 1] = n % 10;
			n = n / 10;
		}
		j++;
		length--;
	}
}

void	clean_teen(int length, int *array)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (length > 0)
	{
		if (j % 5 == 2 && array[length - 1] != 1)
			array[length - 1] = array[length - 1] * 10;
		else if (j % 5 == 2 && array[length - 1] == 1)
		{
			array[length - 1] = array[length - 1] * 10 + array[length];
			array[length] = 0;
		}
		if (j % 5 == 0 && array[length - 2] == 0 && array[length - 3] == 0
		&& array[length - 5] == 0)
			array[length - 1] = 0;
		j++;
		length--;
	}
}

int		countfinalsize(int *array, int length)
{
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (length > 0)
	{
		if (array[i] != 0)
			size++;
		length--;
		i++;
	}
	return (size);
}

void	clean_zeros(int length, int *array, int size)
{
	int		clean[size];
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (length > 0)
	{
		if (array[i] != 0)
		{
			clean[j] = array[i];
			j++;
			i++;
		}
		else if (array[i] == 0)
			i++;
		length--;
	}
}
