/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libreriah.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:50:16 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/18 15:03:10 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRERIAH_H
# define LIBRERIAH_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
# include <string.h>

int     ft_get_matrix_file(char **matrix, char *file);
int     ft_get_fil_from_file(char *file);
int     ft_get_col_from_file(char *file);
int     ft_fill_matrix(char **matrix, int fil, int col);
void	ft_error(int i);
void	ft_putchar(char c);
void	print_map(char **tab, int fil, int col);
char	*ft_stdinp(void);
int		*ft_buscaminas(int *str, int col, int fil);

#endif