/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:36:36 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/14 20:17:57 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != ':')
		i++;
	i++;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '0')
		i++;
	while (str[i] != '\n')
	{
		write(1, &str[i++], 1);
	}
	write(1, &" ", 1);
}

void	ft_rev_int_tab(char *tab, int size)
{
	int i;
	int comp;
	int copy[size];

	i = 0;
	while (i < size)
	{
		copy[i] = tab[i];
		i++;
	}
	i = 0;
	comp = size - 1;
	while (i < size)
	{
		tab[i] = copy[comp];
		i++;
		comp--;
	}
}

char	*int_tochar(int num, char *charnum)
{
	int i;
	int aux;

	aux = num;
	i = 0;
	while (aux / 10 > 0)
	{
		charnum[i] = (aux % 10) + '0';
		aux = aux / 10;
		i++;
	}
	if (aux / 10 == 0)
		charnum[i++] = aux + '0';
	ft_rev_int_tab(charnum, i);
	charnum[i] = 0;
	return (charnum);
}

int		find_word(char *dict, int *key_tofind, int len)
{
	int		i;
	char	*location;
	char	*charnum;

	charnum = malloc(12 * sizeof(char));
	i = 0;
	while (i < len)
	{
		int_tochar(key_tofind[i], charnum);
		location = ft_strstr(dict, charnum);
		if (location == 0)
			return (1);
		print_word(location);
		i++;
	}
	return (0);
}
