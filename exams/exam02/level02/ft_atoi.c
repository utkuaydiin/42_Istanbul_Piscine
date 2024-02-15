/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:34:45 by angavrel          #+#    #+#             */
/*   Updated: 2024/02/07 23:50:16 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //

int		ft_atoi(char *str)
{
	int		sign;
	int i;
	int sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
		
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = sum * 10 + str[i] - '0';
		i++;
	}
	return (sign * sum);
		
}


#include <stdio.h>

int main()
{
	char str[] = "-----21321asd231";
	printf("%d", ft_atoi(str));
}