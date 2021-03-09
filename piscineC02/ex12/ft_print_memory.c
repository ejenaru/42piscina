/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:15:11 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/09 21:25:35 by idiaz-fo         ###   ########.fr       */
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

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long adress;
	char *addr2 = (char*)addr;
	unsigned int i = 0;
		while (i < size)
		{
			while (i < size)
			{
				adress = (unsigned long)addr2;
				addr2+=16;
				print_hex_format(adress, 16);
				write(1, &"\n",1); 
				i += 16;
			}
			i = 0;
			while (i < 16)
			{
				if (str[i] >= 32 && str[i] < 127)
					write(1, &str[i], 1);
				else
				{
					write(1, &"\\", 1);
					if (str[i] / 16 == 0)
					{
						write(1, &"0", 1);
						printhex(str[i]);
					}
					else
						printhex(str[i]);
				}
				i++;
			}
			write(1, &"\n", 1);
		}
	return (addr);
}
