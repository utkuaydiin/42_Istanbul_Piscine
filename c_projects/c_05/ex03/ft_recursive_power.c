/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: utaydin <utaydin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:07:38 by utaydin           #+#    #+#             */
/*   Updated: 2024/02/11 14:23:10 by utaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		i = nb * ft_recursive_power(nb, (power - 1));
	return (i);
}
