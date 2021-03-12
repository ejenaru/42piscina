/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 13:11:54 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/12 21:28:08 by idiaz-fo         ###   ########.fr       */
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
	while (j < (size - i - 1) && src[j] != 0 )
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	if (size > i) // si me cabe, devuelvo lo que había + el source
		return (srcsize + i);
	return (srcsize +  size); // si es menor, significa que no he copiado nada
}
