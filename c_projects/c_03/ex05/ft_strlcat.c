/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:33:28 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/06 20:57:23 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lend;
	unsigned int	lens;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	lend = j;
	lens = ft_strlen (src);
	if (size == 0 || size <= lend)
		return (lens + size);
	while (src[i] != '\0' && i < size - lend - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (lend + lens);
}
