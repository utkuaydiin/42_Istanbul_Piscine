/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:10:30 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/14 20:10:55 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_BSQ_H
# define FT_BSQ_H
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

int ft_str_len(char *str);
int find_words_last(char *str);
int find_words_first(char *str);
int find_number (char *str);
char *find_rules(char *str);
char *file_read(char *file);
char *read_map(char *file);
int col_count(char *arr);
char **create_matrix(char *arr, int col_c, int row_c);
int max_square(char **matrix, int col_c, int row_c, char obs, int first_i, int first_j);
void	find_max_square(char **matrix, int col_c, int row_c);

#endif