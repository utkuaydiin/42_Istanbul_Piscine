/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:44:57 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 18:09:20 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
#include "ft_rush.h"

void	to_find(int len, char *buf)
{
	int	i;

	i = 0;

	i = str_len2(buf , i , len);
	write_words(buf, i);
}
void find_digit(char *buf, char *arr, int len)
{
	int	digit;

	digit = 0;
	while (digit <= len || len >= 0)
	{
		if (len % 3 == 0) 
		{	
		if(!(digit % 3 == 2))
		{
			find_number(buf, arr[digit] - 48);
			to_find(len, buf);
	}
	else 
	{
		two_digits(arr[digit] - 48);
		to_find(len, buf);
	}
	}
	else if(len % 3  == 1)
	{
		if(!(digit == len))
		{
		find_number(buf, arr[digit] - 48);
		to_find(len, buf);
		}
		else 
		two_digits(arr[digit] - 48);
	}
	else if(len % 3 == 2)
	{
		if(!(digit % 3 == 2))
		{
		find_number(buf, arr[digit] - 48);
		to_find(len, buf);
		}
		else 
		two_digits(arr[digit] - 48);
	}
	len--;
	digit++;
	}
}