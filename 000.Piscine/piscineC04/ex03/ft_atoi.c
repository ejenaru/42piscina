/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <idiaz-fo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:07:40 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/16 13:20:53 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int num, unsigned int pow)
{
	unsigned int i;

	i = 1;
	if (pow == 0)
		return (1);
	while (i < pow)
	{
		num *= num;
		i++;
	}
	return (num);
}

int		find_num(char *num_init)
{
	int num;
	int i;

	i = 0;
	num = 0;
	while (*num_init >= '0' && *num_init <= '9')
	{
		num = num * 10 + (*num_init - '0');
		num_init++;
	}
	return (num);
}

int		ft_atoi(char *str)
{
	int sign;
	int num;
	int i;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
