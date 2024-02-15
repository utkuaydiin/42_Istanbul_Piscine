/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:13:30 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/14 22:57:53 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int main(int argc, char **argv)
{
	char *rules;
	char *buf;
	int row_c;
	char **matrix;
	char *map;
	int col_c;
	
	buf = file_read("mapex");
	rules = find_rules(buf);
	row_c = find_number(buf);
	map = read_map("mapex");
	col_c = col_count(map);
	(void)argc;
	argv[0] = " ";
	
	//printf("%s", rules);
	matrix = create_matrix(map, col_count(map), find_number(buf));
	find_max_square(matrix, col_c, row_c);
	
	
}