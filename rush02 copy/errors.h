/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 14:53:25 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/14 15:38:14 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

void	ft_error(int i);
int		check_if_num(char *str, int *len);
int		check_if_longer(char *str, int len);
int		find_num(char *num_init);
int		ft_atoi(char *str, unsigned int *num);

#endif
