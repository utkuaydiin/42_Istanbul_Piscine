/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:18:27 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 18:08:54 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fcntl.h>
# include <stdlib.h>
#include "ft_rush.h"

int	main(int argc, char **argv)
{
	int len;

	len = str_len(argv[1]); 
	if (argc == 2)
	{
		if (!(ft_error(argc, argv[1])))
			return (0);
		find_digit(ft_read_dict("numbers.dict"), argv[1], len);
	}
	if (argc != 2 && argc != 3)
	{
		ft_puterror("Error\n");
		return (0);
	}
}
