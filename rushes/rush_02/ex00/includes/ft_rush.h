/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:47:31 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 18:08:38 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RUSH_H
# define FT_RUSH_H


void to_find(int len, char *buf);
void find_digit(char *buf, char *arr, int len);
char	*ft_read_dict(char *dictionary);
int		ft_error(int argc, char *str);
void	ft_puterror(char *err);
int str_len(char *str);
int str_len2(char *str, int i, int len );
void	write_words(char *str, int i);
void find_number(char *buf, int number);
char 	*read_buf(char *dictionary);	
int		ft_is_number(char *str);
void two_digits(int nbr);

#endif
