/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitaouss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:12:30 by aitaouss          #+#    #+#             */
/*   Updated: 2023/09/05 00:12:31 by aitaouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*result;

	if (min >= max)
		return (NULL);
	i = 0;
	size = max - min;
	result = (int *)malloc(4 * size);
	if (result == NULL)
		return (NULL);
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
