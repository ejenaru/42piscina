/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:26:46 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/18 20:45:33 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int argc, char *argv[])
{
	char a;
	char b;

	a = 2;
	b = argc;
	printf("%d  %d   %s", a, b & a, argv[0]);
	return(0);
}