/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:06:29 by utaydin           #+#    #+#             */
/*   Updated: 2024/01/27 14:45:51 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char z)
{
	write(1, &z, 1);
}

void	ft_convert(int a, int b)
{
	ft_write(48 + a / 10);
	ft_write(48 + a % 10);
	write(1, " ", 1);
	ft_write(48 + b / 10);
	ft_write(48 + b % 10);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_convert(a, b);
			if (a != 98)
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
