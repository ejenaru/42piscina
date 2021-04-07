/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iclement <iclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 19:01:04 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/14 21:37:57 by iclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "library.h"

int		main(int argc, char *argv[])
{
    char	        dict[697];
	int				*array;
	unsigned int	num;
    int             size;

    array = (int*) malloc (16 * 4);
	if (argc == 2)
	{
		if (ft_atoi(argv[1], &num) == 0)
		{
			printf("%u\n", num);
            read_dict(dict);
			size = get_keys(num, array);
			if (find_word(dict, array, size) != 0)
				ft_error(2);
		}
		else
			ft_error(1);
		return (0);
	}
	else if (argc == 3)
		return (0);
	ft_error(1);
	return (0);
}
