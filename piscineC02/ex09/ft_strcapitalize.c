/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 10:47:54 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/05 13:43:31 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z') //soy una letra
		{
			if (i == 0 || !((str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||//Soy el primero o el anterior no es mayus
						(str[i - 1] >= 'a' && str[i - 1] <= 'z') || // o el anterior no es minus
						(str[i - 1] >= '0' && str[i - 1] <= '9'))) //o el anterior no es number
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
