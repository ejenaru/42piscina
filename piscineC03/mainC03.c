/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:49:34 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/09 12:20:26 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);

void	ejercicio00(void)
{
	char s1[] = "hola pepe";
	char s2[] = "hola pepe";
	char s3[] = "hola p";

	printf("%d  original\n", strcmp(s1, s2));
	printf("%d  copia\n", ft_strcmp(s1, s2));
	printf("%d  original\n", strcmp(s1, s3));
	printf("%d  copia\n", ft_strcmp(s1, s3));

}

void	ejercicio01(void)
{
	char s1[] = "hola pepe";
	char s2[] = "hola pepe";
	char s3[] = "asd";

	printf("%d  original\n", strncmp(s1, s2, 3));
	printf("%d  copia\n", ft_strncmp(s1, s2, 3));
	printf("%d  original\n", strncmp(s1, s3, 8));
	printf("%d  copia\n", ft_strncmp(s1, s3, 8));
	printf("%d  original\n", strncmp(s1, s3, 20));
	printf("%d  copia\n", ft_strncmp(s1, s3, 20));

}

void	ejercicio02(void)
{
	char str[80];
	strcpy (str,"these ");
	strcat (str,"strings ");
	strcat (str,"are ");
	strcat (str,"concatenated.");
	char str2[80];
	strcpy (str2,"these ");
	ft_strcat (str2,"strings ");
	ft_strcat (str2,"are ");
	ft_strcat (str2,"concatenated.");

	printf("%s  original\n", str);
	printf("%s  copia\n", str2);
}

int		main()
{
	printf("\nBIENVENIDO A LA IRENETTE\n"
			"Este programa intenta realizar unas pruebas a su código para comprobar si hace lo que "
			"debiera hacer. Mucha suerte.\n");
	printf("\n::::::INICIO  PISCINA C 03::::::\n");
	printf("\n-------EJERCICIO 00: ft_strcmp\n");
	ejercicio00();
	printf("\n-------EJERCICIO 01: ft_strncmp \n");
	ejercicio01();
	printf("\n-------EJERCICIO 02: ft_str_is_alpha\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_str_is_numeric\n");
	//ejercicio03();
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
	return 0;
}
