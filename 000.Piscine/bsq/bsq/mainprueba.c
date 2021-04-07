/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainprueba.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 14:55:19 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/18 19:18:46 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreriah.h"
#include <stdio.h>

char	*ft_zero_matrix(int fil, int col)
{
	int i;
	int j;
	char **matrix;
 
	matrix = malloc(fil * sizeof(char*));
	i = 0;
	while (i < fil)
	{
		matrix[i] = malloc(col * sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	while (i < fil)
	{
		while (j < col)
		{
			matrix[i][j] = '0';
			j++;
		}
		i++;
	}
    return (*matrix);
}

int     ft_print_matrix(char **matrix, int fil, int col)
{
	int i;
	int j;
 
	i = 0;
	j = 0;
	while (i < fil)
	{
		while (j < col)
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		i++;
	}
    return 0;
}

char	*ft_allocate(int a)
{
	char *arr = (malloc(a * sizeof(char)));
	int i;

	i = 0;
	while (i < a)
		arr[i++] = '0';
	return arr;
}
int 	ft_print(char *arr, int a)
{
	int i;

	i = 0;
	while (i < a)
		printf("%c", arr[i++]);
	return 0;
}

int     main(void)
{
    char **matrix;

	matrix = 0;
	printf("-");
	*matrix = ft_zero_matrix(2, 2);
	ft_print_matrix(matrix, 2, 2);
	
	return 0;
}