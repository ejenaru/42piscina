/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iclement <iclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:47:33 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/14 20:20:25 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "library.h"

void	ft_error(int i)
{
	if (i == 1)
		write(1, &"Error\n", 6);
	else if (i == 2)
		write(1, &"Dict Error\n", 11);
}

int		check_if_num(char *str, int *len)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			break ;
		else if (!(str[i] >= '0' && str[i] <= '9'))
			return (1);
		i++;
	}
	*len = i;
	return (0);
}

int		check_if_longer(char *str, int len)
{
	char	*max;
	int		i;

	if (len < 10)
		return (0);
	else if (len > 10)
		return (1);
	i = 0;
	max = "4294967295";
	while (i < len)
	{
		if (str[i] > max[i])
			return (1);
		else if (str[i] < max[i])
			return (0);
		i++;
	}
	return (0);
}

int		find_num(char *num_init)
{
	unsigned int	num;
	int				i;

	i = 0;
	num = 0;
	while (*num_init >= '0' && *num_init <= '9')
	{
		num = num * 10 + (*num_init - '0');
		num_init++;
	}
	return (num);
}

int		ft_atoi(char *str, unsigned int *num)
{
	int	i;
	int	len;

	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '0')
		i++;
	if (check_if_num(&str[i], &len) != 0)
		return (1);
	if (check_if_longer(&str[i], len) != 0)
		return (1);
	if (str[i] >= '0' && str[i] <= '9')
		*num = find_num(&str[i]);
	else
		return (1);
	return (0);
}
