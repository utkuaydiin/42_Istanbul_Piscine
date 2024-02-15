/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 21:28:47 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 20:12:26 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

char *file_read(char *file) // first row
{
	int fd;
	char *buf;
	buf = (char *)malloc(50);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Read error\n", 12);
		return (0);
	}
	read(fd, buf, find_words_last(file) + 1);
	close(fd);
	buf[49] = '\0'; 
	return (buf);
}


char *read_map(char *file)
{
	int fd;
	char *buf;
	char *map;
	buf = (char *)malloc(6);
	map = (char *)malloc(1000);
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Read error\n", 12);
		return (0);
	}
	read(fd, buf, find_words_last(file));
	read(fd, map, 1000);
	map[ft_str_len(map)] = '\0';
	return (map);
}
