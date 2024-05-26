/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:20:01 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/02 22:13:39 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (nb != 0 && power == 0)
		return (1);
	while (power != 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}
