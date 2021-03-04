/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 08:26:59 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/04 13:32:43 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);

void	ejercicio00(void)
{
	char src[] = "Lleva la Tarara un vestido verde";
	int len = sizeof(src) / sizeof(char);
	char dest[len];

	printf("La cadena de origen es:	'%s'\n", src);
	printf("La cadena destino es::	'%s'\n", dest);
	printf("Ejecutando Funcion...\n");
	ft_strcpy(dest, src);
	printf("La cadena destino es::	'%s'\n", dest);
}

void	ejercicio01(void)
{
	char src[] = "Lleno de volantes y de cascabeles";
	int len = 10;
	char dest[sizeof(src) / sizeof(char)];

	printf("La cadena de origen es:	'%s'\n", src);
	printf("La cadena destino es::	'%s'\nVoy a copiar %d caracteres\n", dest, len);
	printf("Ejecutando Funcion...\n");
	ft_strncpy(dest, src, len);
	printf("La cadena destino es::	'%s'\n", dest);
}

void	ejercicio02(void)
{
	char tabsi[] = "LaTararasilatararano";
	char tabno[] = "La Tarara, niña, que la he visto yo";
	char tabempty[0];

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_alpha(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_alpha(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_alpha(tabempty)); 
}

void	ejercicio03(void)
{
	char tabno[] = "Luce mi Tarara su cola de seda";
	char tabsi[] = "123546453645254551";
	char tabempty[0];

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_numeric(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_numeric(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_numeric(tabempty)); 
}

int		main(void)
{
	printf("\nBIENVENIDO A LA IRENETTE\n"
			"Este programa intenta realizar unas pruebas a su código para comprobar si hace lo que "
			"debiera hacer. Mucha suerte.\n");
	printf("\n::::::INICIO  PISCINA C 02::::::\n");
	printf("\n-------EJERCICIO 00: ft_strcpy\n");
	ejercicio00();
	printf("\n-------EJERCICIO 01: ft_strncpy \n");
	ejercicio01();
	printf("\n-------EJERCICIO 02: ft_str_is_alpha\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_str_is_numeric\n");
	ejercicio03();
	printf("\n-------EJERCICIO 04: ft_str_is_lowercase\n");
	//ejercicio04();
	printf("\n-------EJERCICIO 05: ft_str_is_uppercase\n");
	//ejercicio05();
	printf("\n-------EJERCICIO 06: ft_str_is_printable\n");
	//ejercicio06();
	printf("\n-------EJERCICIO 07: ft_strupcase\n");
	//ejercicio07();
	printf("\n-------EJERCICIO 08: ft_strlowercase\n");
	//ejercicio08();
	printf("\n-------EJERCICIO 09: ft_strcapitalize\n");
	//ejercicio09();
	printf("\n-------EJERCICIO 10: ft_strlcpy\n");
	//ejercicio10();
	printf("\n-------EJERCICIO 11: ft_putstr_non_printable\n");
	//ejercicio11();
	printf("\n-------EJERCICIO 12: ft_print_memory\n");
	//ejercicio12();
	printf("\nFin de la corrección\n");
}
