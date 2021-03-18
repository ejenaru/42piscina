/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numeros.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jramirez <jramirez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 17:15:56 by jramirez          #+#    #+#             */
/*   Updated: 2021/03/14 19:53:55 by jramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = power;
	result = 1;
	if (power == 0 && nb == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i > 0)
	{
		result = result * nb;
		i--;
	}
	return (result);
}

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

void	create_array(int length, int *array, unsigned int n)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (length > 0)
	{
		if (j % 5 == 2 && ((n % 10) >= 2 || (n % 10) == 0))
		{
			array[length - 1] = (n % 10) * 10;
			n = n / 10;
		}
		else if (j % 5 == 2 && (n % 10) < 2 && (n % 10) > 0)
		{
			array[length - 1] = (n % 10) * 10 + array[length];
			n = n / 10;
			array[length] = 0;
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
	printf("  tamaño  %d\n", size);
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
	i = 0;
	while (size > 0)
	{
		printf("%d \n", clean[i]);
		size--;
		i++;
	}
}


int		main(void)
{
	unsigned int		n;
	char	*dct_c[32] = {"zero", "one" ,"two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety","hundred","thousand","million","billion"};
	int		dct_num[32] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90,100,1000,1000000,1000000000};
	int 	*array;
	int		length;
	int		tamaño;
	
	n=1000000000;
	length = size_array(n);
	array = (int*) malloc (length * 4);
	create_array(length, array, n);
	tamaño=countfinalsize(array, length);
	clean_zeros(length, array, tamaño);
	//free(array);
	return 0;
}
