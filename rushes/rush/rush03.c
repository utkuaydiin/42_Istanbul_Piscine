/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:01:01 by utaydin           #+#    #+#             */
/*   Updated: 2024/01/27 16:16:57 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);

void	rush03(int col, int row)
{
	int row_c;
	int c_c;

	row_c = 1;
	while(row_c <= row)
	{
		c_c = 1;
		while(c_c <= col)
		{
			if ((row_c == 1 && c_c == 1) || (row_c == row && c_c == 1))
				ft_putchar('A');
			else if ((row_c == 1 && c_c == col) || (row_c == row && c_c == col))
				ft_putchar('C');
			else if ((row_c > 1 && row_c < row) && (c_c > 1 && c_c < col))
				ft_putchar(' ');
			else 
				ft_putchar('B');
			c_c++;
		}
		ft_putchar('\n');
		row_c++;
	}
}
