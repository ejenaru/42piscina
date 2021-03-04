/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:16:05 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/03 20:58:39 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Este código esta hecho para poder corregir los ejercicios :DD
 Si encontrais algun fallo, podeis decirmelo y lo corrijo*/

#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

void	ejercicio00(void)
{
	int a = 1;

	printf("Valor  a:: %d  \n", a);
	printf("Ejecutando Funcion\n");
	ft_ft(&a);
		printf("Valor  a:: %d\n", a);
	if (a == 42)
		printf("Correcto!!\n");
	else
		printf("Ejercicio 00 mal :(\n");
}

void	ejercicio01(void)
{
	int a = 2;
	int *pta = &a;
	int **pt1 = &pta;
	int ***pt2 = &pt1;
	int ****pt3 = &pt2;
	int *****pt4 = &pt3;
	int ******pt5 = &pt4;
	int *******pt6 = &pt5;
	int ********pt7 = &pt6;
	int *********pt8 = &pt7;
	printf("Valor  a::  %d\n", a);
	printf("Ejecutando Funcion \n");
	ft_ultimate_ft(pt8);
	printf("Valor  a:: %d \n", a);
	if (a == 42)
		printf("Correcto!!\n");
	else
		printf("Ejercicio 01 mal :(\n");
}

void	ejercicio02()
{
	int a = 2;
	int b = 5;

	printf("Valor A:: %d\nValor B:: %d\n", a, b);
	printf("Ejecutando Función \n");
	ft_swap(&a, &b);
	printf("Valor A:: %d\nValor B:: %d\n", a, b);
	if (a == 5 && b == 2)
		printf("Correcto !!!\n");
	else
		printf("Ejercicio 02 mal :(\n");
}

void	ejercicio03()
{
	int div = -1;
	int mod = -1;
	int a = 12;
	int b = 2;

	ft_div_mod(a, b, &div, &mod);
	printf("División de %d / %d =  %d   Modulo:  %d\n", a, b, div, mod);

	if (div != -1 && mod != -1)
		printf("Correcto!!\n");
	else
		printf("Ejercicio 03 mal :(\n");

}

void	ejercicio04()
{
	int a = 5;
	int b = 2;

	printf("Valor A:: %d\nValor B:: %d\n", a, b);
	printf("Ejecutando Función \n");
	ft_ultimate_div_mod(&a, &b);
	printf("Valor A(div):: %d\nValor B(mod):: %d\n", a, b);
	if (a == 5 / 2 && b == 5 % 2)
		printf("Correcto !!!\n");
	else
		printf("Ejercicio 04 mal :(\n");
}

void	ejercicio05()
{
	char str[] = "Esta es mi cadena de prueba";

	printf("Intentaré imprimir::  '%s'  ::\n", str);
	printf("Ejecutando Función \n");
	ft_putstr(&str[0]);
	printf("\n¿Está impreso?\n");
}

void	ejercicio06()
{
	char str[] = "Esta es mi cadena de prueba";
	int length = sizeof(str)/sizeof(char);
	int lentest;

	printf("El nº de caracteres de ::  '%s'  :: es  %d \n", str, length -1);
	printf("Ejecutando Función \n");
	lentest = ft_strlen(&str[0]);
	printf("El nº de caracteres obtenido es:  %d\n", lentest);
	if (lentest == length - 1)
		printf("Correcto!!!\n");
	else
		printf("Ejercicio 06 mal :(");
}

void	ejercicio07()
{
	int size = 9;
	int arr[] = {1, 2, 3, 4, -5, 6, 7, 10, 0};
	int i = 0;

	printf("El array es :: ");
	while (i < size)
	{
		printf("%d, ",arr[i]);
		i++;
	}
	printf("\n");
	printf("Ejecutando Función \n");
	ft_rev_int_tab(&arr[0], size);
	printf("El array es :: ");
	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

void	ejercicio08()
{
	int arr[] = {1, 5, 34, 7777, -5, 10, 100, 1234543124, 0};
	int i = 0;
	int size = sizeof(arr) / sizeof(int);

	printf("El array es :: ");
	while (i < size)
	{
		printf("%d, ",arr[i]);
		i++;
	}
	printf("\n");
	printf("Ejecutando Función \n");
	ft_sort_int_tab(&arr[0], size);
	printf("El array es :: ");
	i = 0;
	while (i < size)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\n");
}

int		main(void)
{
	printf("\nBIENVENIDO A LA IRENETTE\n"
			"Este programa intenta realizar unas pruebas a su código para comprobar si hace lo que "
			"debiera hacer. Mucha suerte.\n");
	printf("\n::::::INICIO  PISCINA C 01::::::\n");
	printf("\n-------EJERCICIO 00: ft_ft\n");
	ejercicio00();
	printf("\n-------EJERCICIO 01: ft_utimate_ft \n");
	ejercicio01();
	printf("\n-------EJERCICIO 02: ft_swap\n");
	ejercicio02();
	printf("\n-------EJERCICIO 03: ft_div_mod\n");
	ejercicio03();
	printf("\n-------EJERCICIO 04: ft_ultimate_div_mod\n");
	ejercicio04();
	printf("\n-------EJERCICIO 05: ft_putstr\n");
	ejercicio05();
	printf("\n-------EJERCICIO 06: ft_strlen\n");
	ejercicio06();
	printf("\n-------EJERCICIO 07: ft_rev_int_tab\n");
	ejercicio07();
	printf("\n-------EJERCICIO 08: ft_sort_int_tab\n");
	ejercicio08();
	printf("\nFin de la corrección\n");
}
