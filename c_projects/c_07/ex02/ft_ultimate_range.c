/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:09:57 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 14:20:04 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		index;
	int		*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	buffer = (int *)malloc(size * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < size)
	{
		buffer[index] = min + index;
		index++;
	}
	return (size);
}
#include <stdio.h>

int main()
{

	int **range;
	range = malloc (100);
	
	printf("%d",ft_ultimate_range(range, 1, 5));
}