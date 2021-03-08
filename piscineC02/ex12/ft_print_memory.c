/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:11 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/08 19:48:01 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(long num)
{
	char digit;
	char *base;

	base = "0123456789abcdef";

	if ((num / 16) == 0)
	{
		digit = base[num];
		write(1, &digit, 1);
	}
	else 
	{
		print_hex(num / 16);
		digit = base[num % 16];
		write(1, &digit, 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	//write(1, addr, size);
	return (addr + size);
}
