/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:54:51 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/06 21:34:01 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int srcsize;

	i = 0;
	srcsize = 0;
	while (src[i] != '\0') //contar source
	{
		srcsize++;
		i++;
	}
	i = 0;
	if (size != 0)
	{
		while (i > size) //copiar size caracteres de source en destination
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}

	return(srcsize);
}
