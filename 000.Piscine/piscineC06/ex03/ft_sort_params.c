/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:55:29 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 21:26:33 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (!(s1[i] == 0 || s2[i] == 0))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] == 0 || s2[i] == 0)
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_swap(char *a, char *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;
	while (i++ < argc)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				ft_swap(argv[j], argv[j + 1]);
			j++;
		}
	}
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i++]);
			ft_putstr("\n");
		}
	}
	return (0);
}
