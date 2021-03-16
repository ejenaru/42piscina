/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:28:13 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/15 16:45:26 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putnbr(int nb);
int ft_atoi(char *str);
void ft_putnbr_base(int nbr, char *base);

void	ejercicio00()
{
	printf("%d", ft_strlen("hola buenas tardes"));
}

void	ejercicio01()
{
	ft_putstr("Hola buenas tardes");
}

void	ejercicio02()
{
	ft_putnbr(42);
}

void	ejercicio03()
{
	printf("%d COPIA\n", ft_atoi("  -100"));
	printf("%d ORIGINAL\n", atoi("  -100"));
	printf("%d COPIA\n", ft_atoi("  0"));
	printf("%d ORIGINAL\n", atoi("  0"));
	printf("%d COPIA\n", ft_atoi("  -----+-+-122asd"));
	printf("%d ORIGINAL\n", atoi("  -122asda"));
	printf("%d COPIA\n", ft_atoi("  -e100"));
	printf("%d ORIGINAL\n", atoi("  -e10a0"));
	
}

void	ejercicio04()
{
	ft_putnbr_base(-2147483648, "ponys");
	printf(":  Base: ponys\n");
	ft_putnbr_base(0, "01");
	printf(":  Base: 01\n");
	ft_putnbr_base(16, "0123456789abcdef");
	printf(":  Base: hexadecimal\n");
	ft_putnbr_base(-10, "ABCDE");
	printf(":  Base: ABCDE\n");

}

int		main()
{
	printf("\nBIENVENIDO A LA IRENETTE\n"
			"Este programa intenta realizar unas pruebas a su código para comprobar si hace lo que "
			"debiera hacer. Mucha suerte.\n");
	printf("\n::::::INICIO  PISCINA C 03::::::\n");
	printf("\n-------EJERCICIO 00: ft_strlen\n");
	ejercicio00();
	printf("\n-------EJERCICIO 01: ft_putstr\n");
	ejercicio01();
	printf("\n-------EJERCICIO 02: ft_putnbr\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_atoi\n");
	ejercicio03();
	printf("\n-------EJERCICIO 04: ft_putnbr_base\n");
	ejercicio04();
	printf("\n-------EJERCICIO 05: ft_strlcat\n");
	//ejercicio05();
	printf("\nFin de la corrección\n");
	return 0;
}
