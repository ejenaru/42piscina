/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 17:54:51 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/05/26 21:21:25 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = 0;
	while (src[i] != 0)
		i++;
	srcsize = i;
	i = 0;
	if (size != 0)
	{
		while (i < size)
		{
			if (i == size - 1)
				dest[i] = '\0';
			else
				dest[i] = src[i];
			i++;
		}
	}
	return (srcsize);
}
