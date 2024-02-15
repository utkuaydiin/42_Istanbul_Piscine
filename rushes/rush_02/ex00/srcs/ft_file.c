/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:56:33 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 18:08:46 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
#include "ft_rush.h"

char	*ft_read_dict(char *dictionary)
{
	int		fd;
	char	*buf;

	buf = (char *)malloc(2000);
	fd = open(dictionary, O_RDONLY);
	if (fd == -1)
	{
		ft_puterror("Read error\n");
		return (0);
	}
	read(fd, buf, 1000);
	close(fd);
	return (buf);
}