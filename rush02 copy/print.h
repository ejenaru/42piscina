/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 15:38:54 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/14 17:35:00 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

char	*ft_strstr(char *str, char *to_find);
void	print_word(char *position);
void	ft_rev_int_tab(char *tab, int size);
char	*int_tochar(int num, char *charnum);
int		find_word(char *dict, int *key_tofind, int len);

#endif
