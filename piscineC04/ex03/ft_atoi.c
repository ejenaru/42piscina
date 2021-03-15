/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idiaz-fo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 18:07:40 by idiaz-fo          #+#    #+#             */
/*   Updated: 2021/03/13 16:02:35 by idiaz-fo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int num, unsigned int pow)
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

int	find_num(char *num_init)
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
	/*num_init--;
	while (*num_init >= '0' && *num_init <= '9')
	{
		num += ((num_init[i] - '0') * ft_pow(10, i));
		num_init--;
		i++;	
	}*/
	return (num);
}

int ft_atoi(char *str)
{
	int sign;
	int num;
	int i;

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
	if (str[i] > '0' && str[i] < '9')
		num = find_num(&str[i]);
	else
		return (0);
	return  (num * sign);
}
