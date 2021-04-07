/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 15:20:29 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/03 17:51:45 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
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
