/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_matrix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 19:21:59 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/18 18:40:18 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreriah.h"


int     ft_get_matrix_file(char **matrix, char *file)
{
    int fil;
    int col;
    
    fil = ft_get_fil_from_file(file);
    if (fil == -1)
    {
        ft_error(2);
        ft_error(1);
        return(1);
    }
    col = ft_get_col_from_file(file);
    if (col == -1)
    {
        ft_error(1);
        return(1);
    }
    return (ft_fill_matrix(matrix, fil, col));
}

int     ft_get_fil_from_file(char *file)
{
    char    buff[1];
    int     nextchar;
    int     fd;
    int     num;

    num = 0;
    fd = open(file, O_RDONLY);
    while ((nextchar = read(*file, buff, sizeof(char))) > 0) // voy leyendo
    {
        printf("%c", buff[0]);
        if (buff[0] >= '0' && buff[0] <='9') //si lo que leo es un número
            num = num * 10 + (buff[0] - '0'); // voy guardando el número
        else if(buff[0] == '\n') //si llego al final de la línea me voy
            break;
    }
    close(fd);
    return (num);
}


int     ft_get_col_from_file(char *file)
{
    char buff[1];
    int nextchar;
    int fd;
    int count;
    
    count = 0;
    fd = open(file, O_RDONLY);
    while (*buff != '\n') // salto la primera linea
        nextchar = read(*file, &buff, sizeof(char));
    while ((nextchar = read(*file, &buff, sizeof(char))) > 0) //cuento 
    {
        count++;
        if ( *buff == '\n')
            break;
    }
    close(fd);
    return (count == 0 ? 1 : count);
}

char	*ft_zero_matrix(int fil, int col)
{
	int i;
	int j;
	char **matrix;
 
	matrix = malloc(fil * sizeof(char));
	i = 0;
	while (i < fil)
	{
		matrix[i] = malloc(col * sizeof(char));
		i++;
	}
	i = 0;
	j = 0;
	while (i < fil)
	{
		while (j < col)
		{
			matrix[i][j] = '0';
			j++;
		}
		i++;
	}
    return (matrix);
}

int     ft_print_matrix(char **matrix, int fil, int col)
{
	int i;
	int j;
 
	i = 0;
	j = 0;
	while (i < fil)
	{
		while (j < col)
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		i++;
	}
    return 0;
}

