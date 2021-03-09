/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:11 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/09 19:33:27 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned long num)
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
	unsigned long adress;

	adress = (unsigned long)addr;
	write (1, addr, size);
	int i = 0;
	while (i < 10)
		print_hex(adress + i++);

	return (addr);
}
