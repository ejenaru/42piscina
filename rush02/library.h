/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iclement <iclement@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:53:25 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/14 21:06:46 by iclement         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

void	ft_error(int i);
int		check_if_num(char *str, int *len);
int		check_if_longer(char *str, int len);
int		find_num(char *num_init);
int		ft_atoi(char *str, unsigned int *num);

char	*ft_strstr(char *str, char *to_find);
void	print_word(char *position);
void	ft_rev_int_tab(char *tab, int size);
char	*int_tochar(int num, char *charnum);
int		find_word(char *dict, int *key_tofind, int len);

void	read_dict(char *buffer);
void	read_dict_two(char *buffer);

int		ft_iterative_power(int nb, int power);
int		size_array(unsigned int n);
void	create_array(int length, int *array, unsigned int n, int i);
void	clean_teen(int length, int *array);
int		countfinalsize(int *array, int length);
void	clean_zeros(int length, int *array, int size);
int 	get_keys(unsigned int n, int *array);

#endif
