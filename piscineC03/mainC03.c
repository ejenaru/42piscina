/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:49:34 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/12 21:28:10 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

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
	char str2[20];
	strcpy (str2,"these ");
	ft_strcat (str2,"strings ");
	ft_strcat (str2,"are ");
	ft_strcat (str2,"concatenated.");

	printf("%s  original\n", str);
	printf("%s  copia\n", str2);
}

void	ejercicio03(void)
{
	char str[80];
	strcpy(str,"these ");
	strncat(str,"strings ", 8);
	strncat(str,"are ",1);
	strncat(str,"concatenated.", 50);
	char str2[80];
	strcpy(str2,"these ");
	ft_strncat(str2,"strings ", 8);
	ft_strncat(str2,"are ", 1);
	ft_strncat(str2,"concatenated.", 50);

	printf("%s|original\n", str);
	printf("%s|copia\n", str2);
}

void	ejercicio04(void)
{
	char str[] = "BaBa oo Bar Baz";
	char str2[] = "BaBa oo Ba Baz";
	char str3[] = "";
	char find[] = "Bar";

	printf("%s|str\n", str);
	printf("%s|find\n", find);
	printf("%s|original\n", strstr(str, find));
	printf("%s|copia\n", ft_strstr(str, find));
	printf("%s|original\n", strstr(str2, find));
	printf("%s|copia\n", ft_strstr(str2, find));
	printf("%s|original\n", strstr(str, str3));
	printf("%s|copia\n", ft_strstr(str, str3));
}

void	ejercicio05(void)
{
	char str[40];
	char str2[40];
	strcpy(str,"these ");
	strcpy(str2,"these ");
	printf("%lu o\n",strlcat(str,"strings ", 8));
	printf("%u c \n",ft_strlcat(str2,"strings ", 8));
	printf("%lu o \n",strlcat(str,"are ",1));
	printf("%u c \n",ft_strlcat(str2,"are ", 1));
	printf("%lu o \n",strlcat(str,"concatenated.", 20));
	printf("%u c \n",ft_strlcat(str2,"concatenated.", 20));

	printf("%s|original\n", str);
	printf("%s|copia\n", str2);
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
	printf("\n-------EJERCICIO 02: ft_strcat\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_strncat\n");
	ejercicio03();
	printf("\n-------EJERCICIO 04: ft_strstr\n");
	ejercicio04();
	printf("\n-------EJERCICIO 05: ft_strlcat\n");
	ejercicio05();
	printf("\nFin de la corrección\n");
	return 0;
}
