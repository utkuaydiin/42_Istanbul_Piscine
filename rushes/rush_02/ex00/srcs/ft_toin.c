/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 18:30:29 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/13 18:08:51 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <fcntl.h>
# include <stdlib.h>
#include "ft_rush.h"


char 	*read_buf(char *dictionary)
{
char *buf;
buf = ft_read_dict(dictionary);
return (buf);
}


