/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:34:15 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/17 16:55:49 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb);
int	ft_recursive_factorial(int nb);
int	ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);

void	ejercicio00()
{
	printf("%d\n", ft_iterative_factorial(5));
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(10));
}
void	ejercicio01()
{
	printf("%d\n", ft_recursive_factorial(5));
	printf("%d\n", ft_recursive_factorial(-5));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(10));
}
void	ejercicio02()
{
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(5, 0));
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(-2, -1));
	printf("%d\n", ft_iterative_power(3, -5));
}
void	ejercicio03()
{
	printf("%d\n", ft_recursive_power(5, 2));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(-2, 3));
	printf("%d\n", ft_recursive_power(-2, -1));
	printf("%d\n", ft_recursive_power(3, -5));
}

void	ejercicio04()
{
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(-10));
}
void	ejercicio05()
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(3));
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(-1));
}

void	ejercicio06()
{
	printf("%d   Last\n", ft_is_prime(2147483647));
	printf("%d   1\n", ft_is_prime(1));
	printf("%d   -1\n", ft_is_prime(-1));
	printf("%d   2\n", ft_is_prime(2));
	printf("%d   3\n", ft_is_prime(3));
	printf("%d   97\n", ft_is_prime(97));
}

void	ejercicio07()
{
	printf("%d   2147483646\n", ft_find_next_prime(2147483646));
	printf("%d   14\n", ft_find_next_prime(0));
	printf("%d   10\n", ft_find_next_prime(10));
	printf("%d   50\n", ft_find_next_prime(50));
	printf("%d   -2147483648\n", ft_find_next_prime(-2147483648));
	printf("%d   51518\n", ft_find_next_prime(51518));
}
int		main()
{
	printf("\nBIENVENIDO A LA IRENETTE\n"
			"Este programa intenta realizar unas pruebas a su código para comprobar si hace lo que "
			"debiera hacer. Mucha suerte.\n");
	printf("\n::::::INICIO  PISCINA C 03::::::\n");
	printf("\n-------EJERCICIO 00: ft_iterative_factorial\n");
	ejercicio00();
	printf("\n-------EJERCICIO 01: ft_recursive Factorial\n");
	ejercicio01();
	printf("\n-------EJERCICIO 02: ft_iterative_power\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_recursive_power\n");
	ejercicio03();
	printf("\n-------EJERCICIO 04: ft_fibonacci\n");
	ejercicio04();
	printf("\n-------EJERCICIO 05: ft_sqrt\n");
	ejercicio05();
	printf("\n-------EJERCICIO 06: ft_is_prime\n");
	ejercicio06();
	printf("\n-------EJERCICIO 07: ft_find_next_prime\n");
	ejercicio07();
	printf("\nFin de la corrección\n");
	return 0;
}
