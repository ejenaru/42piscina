/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC05.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:34:15 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/16 13:34:17 by idiaz-fo         ###   ########.fr       */
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
