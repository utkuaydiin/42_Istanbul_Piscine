/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 20:09:49 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/12 21:28:56 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bsq.h"

int ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int find_words_last(char *str)
{
	int i;
	i = 0;

	while(str[i] == ' ' || str[i] == '\t' || (str[i] < 32 || str[i] == 127))
		i++;
	while(str[i] != ' ' && str[i] != '\t')
		i++;
	return(i);
}

int find_words_first(char *str)
{
	int i;
	i = 0;
	while(str[i] == ' ' || str[i] == '\t' || (str[i] < 32 || str[i] == 127))
		i++;
	return (1);
}

int find_number (char *str)
{
	int i;
	int result;
	
	i = 0;
	result = 0;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

char *find_rules(char *str)
{
	char *rules;
	int i;
	rules = malloc(3);
	i = 0;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	rules[0] = str[i++];
	rules[1] = str[i++];
	rules[2] = str[i];
	
	return (rules);
}


