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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int srcsize;

	i = 0;
	j = 0;
	while (src[i] != 0)
		i++;
	srcsize = i;
	if (size == 0)
		return (srcsize);
	i = 0;
	while (dest[i] != 0)
		i++;
	if (size <= i) // si ya está completo, devuelvo lo que he intentado crear pero eres imbecil
		return (srcsize + size);
	while (j < (size - i - 1) && src[j] != 0 )
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (srcsize + i); // si es mayor, significa que he copiado algo, devuelvo lo que he intentado crear
}
