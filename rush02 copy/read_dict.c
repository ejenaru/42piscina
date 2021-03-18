/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iclement <iclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:32:10 by iclement          #+#    #+#             */
/*   Updated: 2021/03/14 21:04:33 by iclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include "library.h"

void	read_dict(char *buffer)
{
	int		fd;
	size_t	rp1;

	fd = open("numbers.dict", O_RDONLY);
	rp1 = read(fd, buffer, 690);
	close(fd);
}

void	read_dict_two(char *argv)
{
	int		fd;
	char	*buffer;
	size_t	rp1;

	buffer = (char*)malloc(1000);
	fd = open(&argv[1], O_RDONLY);
	rp1 = read(fd, buffer, 1000);
	close(fd);
}
