/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 22:57:06 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/11 14:24:15 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		i = nb * i;
		power--;
	}
	return (i);
}
