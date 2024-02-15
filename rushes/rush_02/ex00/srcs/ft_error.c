/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:19:52 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 18:08:45 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
#include "ft_rush.h"

int		ft_error(int argc, char *str)
{
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (!(ft_is_number(str)))
	{
		ft_puterror("Error\n");
		return (0);
	}
	if (str_len(str) > 37)
	{
		ft_puterror("Dict Error\n");
		return (0);
	}
	return (1);
}

void	ft_puterror(char *err)
{
	int	i;

	i = 0;
	while (err[i] != 0)
	{
		write(2, &err[i], 1);
		i++;
	}
}