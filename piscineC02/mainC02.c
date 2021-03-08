/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainC02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 08:26:59 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/08 19:48:09 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);
void print_hex(long num);

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
	char tabsi[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
	char tabno[] = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM[";
	char tabempty[] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_alpha(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_alpha(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_alpha(tabempty)); 
}

void	ejercicio03(void)
{
	char tabno[] = "0123456789:";
	char tabsi[] = "0123456789";
	char tabempty[] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_numeric(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_numeric(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_numeric(tabempty)); 
}

void	ejercicio04(void)
{
	char tabno[] = "qwertyuiopasdfghjklzxcvbnmA";
	char tabsi[] = "qwertyuiopasdfghjklzxcvbnm";
	char tabempty[] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_lowercase(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_lowercase(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_lowercase(tabempty)); 
}

void	ejercicio05(void)
{
	char tabno[] = "QWERTYUIOPASDFGHJKLZXCVBNMÑ";
	char tabsi[] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char tabempty[0] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_uppercase(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_uppercase(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_uppercase(tabempty)); 
}

void	ejercicio06(void)
{
	char tabno[] = { 2, 3, 30, 0};
	char tabsi[] = "12354645dafsgdfhjhgfd!-;:1";
	char tabempty[] = "";

	printf("La cadena 1 (non printable) es:: '%s'\n", tabno);
	printf("Resultado:	%d\n", ft_str_is_printable(tabno)); 
	printf("La cadena 2 (printable) es:: '%s'\n", tabsi);
	printf("Resultado:	%d\n", ft_str_is_printable(tabsi)); 
	printf("La cadena 3 (vacía) es:: '%s'\n", tabempty);
	printf("Resultado:	%d\n", ft_str_is_printable(tabempty)); 
}

void	ejercicio07(void)
{
	char tabno[] = "ABCabcDEFdef";
	char tabsi[] = "12345¿?ABCDE abcde  xyzXYZ";
	char tabempty[] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	'%s'\n", ft_strupcase(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	'%s'\n", ft_strupcase(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	'%s'\n", ft_strupcase(tabempty)); 
}

void	ejercicio08(void)
{
	char tabno[] = "ABCabcDEFdef";
	char tabsi[] = "12345¿?ABCDE abcde  xyzXYZ";
	char tabempty[] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	'%s'\n", ft_strlowcase(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	'%s'\n", ft_strlowcase(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	'%s'\n", ft_strlowcase(tabempty)); 
}

void	ejercicio09(void)
{
	char tabno[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char tabsi[] = "1df hola ABCC Ef-ad ropa -o-0:el cafe+es+bueno, y esta rico ? ";
	char tabempty[] = "";

	printf("La cadena 1 es:: '%s'\n", tabno);
	printf("Resultado:	'%s'\n", ft_strcapitalize(tabno)); 
	printf("La cadena 2 es:: '%s'\n", tabsi);
	printf("Resultado:	'%s'\n", ft_strcapitalize(tabsi)); 
	printf("La cadena 3 es:: '%s'\n", tabempty);
	printf("Resultado:	'%s'\n", ft_strcapitalize(tabempty)); 
}

void	ejercicio10(void)
{
	char src[] = "ESTA CADENA TIENE 25 CHAR";
	char dest[1];

	printf("La cadena 1 es:: '%s'\n", src); 
	printf("La cadena 2 es:: '%s'\n", dest);
	printf("SIZE SOURCE::  %d\n", ft_strlcpy(dest, src, sizeof(dest)/sizeof(char))); 
	printf("La cadena 2 es:: '%s'\n", dest);
	printf("La cadena 1 es:: '%s'\n",src);
	printf("\ndest: %lu, source: %lu\n", sizeof(dest), sizeof(src)/sizeof(char));
}

void	ejercicio11(void)
{
	char src[] = "ESTA CAD'\n'ENA TI'\x1E' '\x1F'NE '\x17' '\x0F' 25 CHAR";

	printf("La cadena 1 es:: '%s'\n", src); 
	ft_putstr_non_printable(src);
	printf("\n");
}

void	ejercicio12(void)
{
	char src[10];
	print_hex(src);
	/*char *str = "Salut les aminches c'est cool show mem on fait de truc terrible\1\2";
	ft_print_memory(str, fstrlen(str));
	ft_print_memory(str, 0);*/

	ft_print_memory(src, 8);
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
	ejercicio04();
	printf("\n-------EJERCICIO 05: ft_str_is_uppercase\n");
	ejercicio05();
	printf("\n-------EJERCICIO 06: ft_str_is_printable\n");
	ejercicio06();
	printf("\n-------EJERCICIO 07: ft_strupcase\n");
	ejercicio07();
	printf("\n-------EJERCICIO 08: ft_strlowercase\n");
	ejercicio08();
	printf("\n-------EJERCICIO 09: ft_strcapitalize\n");
	ejercicio09();
	printf("\n-------EJERCICIO 10: ft_strlcpy\n");
	ejercicio10();
	printf("\n-------EJERCICIO 11: ft_putstr_non_printable\n");
	ejercicio11();
	printf("\n-------EJERCICIO 12: ft_print_memory\n");
	ejercicio12();
	printf("\nFin de la corrección\n");
	return 0;
}
