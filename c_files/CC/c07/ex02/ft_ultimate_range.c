/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:12:47 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/05 00:12:51 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	result = (int *)malloc(4 * size);
	if (result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	*range = result;
	return (i);
}
