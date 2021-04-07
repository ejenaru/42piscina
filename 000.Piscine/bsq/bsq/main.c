<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:48:15 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/16 21:00:56 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libreriah.h"

int     main(int argc, char *argv[])
{
    int i;
    char **matrix = NULL;

    i = 0;
    while (i++ < argc)
    {
        if (argc == 1)
        {
            //if (ft_get_matrix_std() != 0)
            return (0);
            //Get matrix from std input
            //gestionar errores
        }
        else if (argc > 1)
        {
            if (ft_get_matrix_file(matrix, argv[i]) != 0)
            {
                //ft_error(1);
                return (0);
            }
            //get matrix from file
            //Gestionar errores
        }
        else{
            //misterious error
        }
        //print initial matrix
        //logic things
        //print final matrix
        
    }    
    return (0);
}
