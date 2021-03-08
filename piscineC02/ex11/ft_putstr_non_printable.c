/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:51:39 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/08 16:49:11 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*changebase(char *hexcharnum, int num)
{
	char *base;

	base = "0123456789abcdef";
	hexcharnum[0] = base[num / 16];
	hexcharnum[1] = base[num % 16];
	return (hexcharnum);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hexnum[2];

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] < 32 || str[i] == 127))
			write(1, &str[i], 1);
		else
		{
			changebase(hexnum, str[i]);
			write(1, &"\\", 1);
			write(1, hexnum, 2);
		}
		i++;
	}
}
