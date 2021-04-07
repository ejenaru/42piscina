/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:11 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/10 11:23:36 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex_format(unsigned long num, int cont)
{
	char digit;
	char *base;

	base = "0123456789abcdef";
	if (cont != 0)
	{
		if ((num / 16) == 0)
		{
			digit = base[num];
			print_hex_format(num / 16, --cont);
			write(1, &digit, 1);
		}
		else
		{
			print_hex_format(num / 16, --cont);
			digit = base[num % 16];
			write(1, &digit, 1);
		}
	}
}

void	print_16char(char *str, int remcont)
{
	int i;

	i = 0;
	while (i < remcont)
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
			write(1, &".", 1);
		i++;
	}
}

void	print_memoryhex(char *str, int remcont)
{
	int i;

	i = 0;
	while (i < remcont)
	{
		print_hex_format(*(str + i), 2);
		if (i % 2 == 1)
			write(1, &" ", 1);
		i++;
	}
	while (remcont < 16)
	{
		write(1, &" ", 1);
		if (remcont % 2 == 1)
			write(1, &" ", 1);
		remcont++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*address;
	unsigned int	i;
	unsigned int	tam;

	i = 0;
	address = addr;
	while (i < size)
	{
		tam = (size - i) / 16 != 0 ? 16 : (size - i);
		print_hex_format((unsigned long)address, 16);
		write(1, &": ", 2);
		print_memoryhex(address, tam);
		print_16char(address, tam);
		write(1, &"\n", 1);
		address += 16;
		i += 16;
	}
	return (addr);
}
