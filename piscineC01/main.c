/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:16:05 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/02 21:46:00 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ejercicio00(void)
{
	int a = 1;

	printf("EJERCICIO 00: ft_ft \n");
	printf("La variable a vale: %d  \n", a);
	ft_ft(&a);
	if (a == 42)
		printf("Ahora vale: %d  Correcto!!\n", a);
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
	printf("EJERCICIO 01: ft_ultimate_ft \n");
	printf("El valor de a es:  %d\nAhora vale: ", a);
	ft_ultimate_ft(pt8);
	if (a == 42)
		printf("%d  Correcto!!\n", a);
	else
		printf("Ejercicio 01 mal :(\n");
}

void	ejercicio02()
{
	int a = 2;
	int b = 5;

	printf("A:  %d     B:  %d\n", a, b);
	ft_swap(&a, &b);
	printf("Hago la función \n A:  %d   B:  %d\n", a, b);
	if (a == 5)
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

	if (div != -1 && mod != -1)
		printf("División de %d / %d =  %d   Modulo:  %d\n Correcto!!\n", a, b, div, mod);
	else
		printf("Ejercicio 03 mal :(\n");

}

int		main(void)
{
	ejercicio00();
	printf("------------------\n");
	ejercicio01();
	printf("------------------\n");
	ejercicio02();
	printf("------------------\n");
	ejercicio03();
	printf("------------------\n");
}
