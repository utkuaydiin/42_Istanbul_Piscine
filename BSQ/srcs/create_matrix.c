/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:28:29 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/14 23:37:03 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int col_count(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\n')
	{
		i++;
	}
	return (i);
}

char **create_matrix(char *arr, int col_c, int row_c)
{
	char **matrix;
	int i;
	int j;
	int k;

	matrix = malloc(row_c * sizeof(char *));
	j = 0;
	i = 0;
	k = 0;
	while (i <= row_c )
	{
		j = 0;
		matrix[i] = malloc(col_c * sizeof(char));
		while(j <= col_c )
		{
			matrix[i][j] = arr[k];
			write(1, &matrix[i][j], 1);
			k++;
			j++;
		}
		i++;
	}
	
	return (matrix);
}

int max_square(char **matrix, int col_c, int row_c, char obs, int first_i, int first_j)
{
	int col_lenght;
	int row_lenght;
	int i;
	int j;

	i = first_i;
	j = first_j;
	while (i <= col_c && matrix[j][i] != obs)
		i++;
	row_lenght = i - first_i;
	i = first_i;
	while (j <= row_c && matrix[j][i] != obs)
		j++;
	j--;
	col_lenght = j - first_j;
	while(j >= first_j)
	{
		i = first_i;
		while (i < row_lenght)
		{
			if (matrix[j][i] == obs)
				return (0);
			i++;
		}
		j--;
	}
	return (1);
}
int max_square_alan(char **matrix, int col_c, int row_c, char obs, int first_i, int first_j)
{
	int col_lenght;
	int row_lenght;
	int i;
	int j;

	i = first_i;
	j = first_j;
	while (i <= col_c && matrix[j][i] != obs)
		i++;
	row_lenght = i - first_i;
	i = first_i;
	while (j <= row_c && matrix[j][i] != obs)
		j++;
	col_lenght = j - first_j;
	
	return (col_lenght * row_lenght);
}

void	find_max_square(char **matrix, int col_c, int row_c)
{
	int i;
	int j;
	int obs = 'o';
	int max_alan;
	int start_i;
	int start_j;
	
	i = 0;
	j = 0;
	while(j < row_c)
	{
		i = 0;
		while(i < col_c)
		{
			
			if(max_square(matrix, col_c, row_c, obs, i, j) == 1)
			{
				if(max_square_alan(matrix, col_c, row_c, obs, i, j) > max_alan)
				{
					max_alan = max_square_alan(matrix, col_c, row_c, obs, i, j);
					start_i = i;
					start_j = j;
				}
				write(1, "engel yok\n", 11);
			}
			else 
				write(1, "engel var\n", 11);
	
	   		i++;
		}
		j++;
	}
}