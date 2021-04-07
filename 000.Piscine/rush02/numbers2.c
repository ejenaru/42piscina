/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iclement <iclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 21:40:18 by iclement          #+#    #+#             */
/*   Updated: 2021/03/14 21:43:42 by iclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int 	get_keys(unsigned int n, int *array)
{
	int		length;
	int		tamaño;
    int     size;
    
	length = size_array(n);
	create_array(length, array, n, 0);
	clean_teen(length, array);
	size=countfinalsize(array, length);
	clean_zeros(length, array, size);
	return(size);
}


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
