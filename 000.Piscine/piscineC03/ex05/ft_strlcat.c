/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:11:54 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/13 11:48:57 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <ctype.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t srcsize;

	srcsize = ft_strlen(src); //cuento src
	if (size == 0) //si no quiero copiar nada, me voy
		return (srcsize);
	i = 0;
	while (dest[i] != 0) //me posiciono al final de dest
		i++;
	if (size <= i) // size es  el TOTAL, si el total de lo que quiero crear es mas pequeño que lo que YA TENGO
		return (srcsize + size); //esto es lo que me hace falta para haberla creado
	j = 0;
	while (j < (size - i - 1) && src[j] != 0 )
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (srcsize + i); // si es mayor, significa que he copiado algo, devuelvo lo que he intentado crear
}
