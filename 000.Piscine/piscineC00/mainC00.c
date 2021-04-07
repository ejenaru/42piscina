/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:59:49 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/04 11:34:02 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_print_combn(int n);

void	ejercicio00(void)
{
	ft_putchar('Z');
}

void	ejercicio01(void)
{
	ft_print_alphabet();
}

void	ejercicio02(void)
{
	ft_print_reverse_alphabet();
}

void	ejercicio03(void)
{
	ft_print_numbers();
}
void	ejercicio04(void)
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(87);
}
void	ejercicio05(void)
{
	ft_print_comb();
}
void	ejercicio06(void)
{
	ft_print_comb2();
}
void	ejercicio07(void)
{
	ft_putnbr(-2147483648);
	ft_putchar(' ');
	ft_putnbr(2147483647);
	ft_putchar(' ');
	ft_putnbr(-545);
	ft_putchar(' ');
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(10000);
}
void	ejercicio08(void)
{
	//ft_print_combn(4);
}

int		main(void)
{
	printf("\nBIENVENIDO A LA IRENETTE\n"
			"Este programa intenta realizar unas pruebas a su código para comprobar si hace lo que "
			"debiera hacer. Mucha suerte.\n");
	printf("\n::::::INICIO  PISCINA C 00::::::\n");
	printf("\n-------EJERCICIO 00: ft_putchar\n");
	ejercicio00();
	printf("\n-------EJERCICIO 01: ft_print_alphabet \n");
	ejercicio01();
	printf("\n-------EJERCICIO 02: ft_print_reverse_alphabet\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_print_numbers\n");
	ejercicio03();
	printf("\n-------EJERCICIO 04: ft_is_negative\n");
	ejercicio04();
	printf("\n-------EJERCICIO 05:  ft_print_comb\n");
	ejercicio05();
	printf("\n-------EJERCICIO 06: ft_print_comb2\n");
	ejercicio06();
	printf("\n-------EJERCICIO 07: ft_putnbr\n");
	ejercicio07();
	printf("\n-------EJERCICIO 08: ft_print_combn\n");
	//ejercicio08();
	printf("\nFin de la corrección\n");
}
